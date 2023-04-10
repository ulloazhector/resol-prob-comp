#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main(int argc, char const *argv[]) {
    FILE *fptr_m1 = fopen(argv[1], "r");
    FILE *fptr_m2 = fopen(argv[2], "r");
    FILE *fptr_m3 = fopen(argv[3], "r");

    if (!fptr_m1 || !fptr_m2 || !fptr_m3) {
        printf("error\n");
        exit(-1);
    }

    TMatrix matrix1, matrix2, matrix3;
    loadMatrixFromFile(&matrix1, fptr_m1);
    loadMatrixFromFile(&matrix2, fptr_m2);
    loadMatrixFromFile(&matrix3, fptr_m3);

    // showMatrix(matrix1);
    // printf("\n");

    // showMatrix(matrix2);
    // printf("\n");

    showMatrix(matrix3);
    printf("\n");

    TMatrix mul = mulMatrix(matrix1, matrix2);
    // showMatrix(mul);

    TMatrix diag = gaussianEliminationMatrix(matrix3);
    showMatrix(diag);

    free(matrix1.values);
    free(matrix2.values);
    free(mul.values);
    free(diag.values);
    return 0;
}
