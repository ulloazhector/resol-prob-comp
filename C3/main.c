#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main(int argc, char const *argv[]) {
    FILE *fptr = fopen("./file.txt", "r");

    if (!fptr) {
        printf("error\n");
        exit(-1);
    }

    TMatrix matrix;
    fscanf(fptr, "%d%d", &matrix.rows, &matrix.cols);

    callocMatrix(&matrix);
    loadMatrixFromFile(&matrix, fptr);

    showMatrix(matrix);

    free(matrix.values);
    fclose(fptr);
    return 0;
}
