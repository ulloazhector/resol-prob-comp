#include "functions.h"

void callocMatrix(TMatrix *matrix) {
    matrix->values = (int **)calloc(matrix->rows, sizeof(int *));
    if (!matrix->values) {
        printf("error\n");
        exit(-1);
    }

    for (size_t i = 0; i < matrix->rows; i++) {
        matrix->values[i] = (int *)calloc(matrix->cols, sizeof(int));
        if (!matrix->values[i]) {
            printf("error\n");
            exit(-1);
        }
    }
}

void showMatrix(TMatrix matrix) {
    for (size_t i = 0; i < matrix.rows; i++) {
        for (size_t j = 0; j < matrix.cols; j++)
            printf("%d\t", matrix.values[i][j]);
        printf("\n");
    }
}

void loadMatrixFromFile(TMatrix *matrix, FILE *fptr) {
    for (size_t i = 0; i < matrix->rows; i++)
        for (size_t j = 0; j < matrix->cols; j++)
            if (!feof(fptr)) 
                fscanf(fptr, "%d", &matrix->values[i][j]);
}