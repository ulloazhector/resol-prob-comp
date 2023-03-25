#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main(int argc, char const *argv[]) {
    FILE *fptr = fopen("./file.txt", "r");

    if (!fptr) {
        printf("error\n");
        exit(-1);
    }

    int rows, cols;
    fscanf(fptr, "%d%d", &rows, &cols);

    TMatrix matrix;
    matrix.rows = rows;
    matrix.cols = cols;

    callocMatrix(&matrix);

    printf("matrix: %d\n", matrix.values[0][0]);

    free(matrix.values);
    fclose(fptr);
    return 0;
}
