#include "functions.h"

void callocMatrix(TMatrix *matrix){
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