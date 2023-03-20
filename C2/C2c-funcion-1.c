#include "C2c-funcion-1.h"

void loadMatrix(int row, int col, int * matrix[]) {
    for (size_t i = 0; i < row; i++)
        for (size_t j = 0; j < col; j++)
            matrix[i][j] = pow(2, i * row + j);
}

void showMatrix(int row, int col, int * matrix []) {
    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < col; j++)
            printf("%d", matrix[i][j]);
        printf("\n");
    }
}

void sumMatrix(int row, int col, int * matrix_1[], int * matrix_2[], int * result[]){
    for (size_t i = 0; i < row; i++)
        for (size_t j = 0; j < col; j++)
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
}

void scalarProductMatrix(int row, int col, int * matrix_1[], int scalar, int * result[]) {
    for (size_t i = 0; i < row; i++)
        for (size_t j = 0; j < col; j++)
            result[i][j] = scalar * matrix_1[i][j];
}

void transposeMatrix(int row, int col, int * matrix_1[], int * result[]) {
    for (size_t i = 0; i < row; i++)
        for (size_t j = 0; j < col; j++)
            result[j][i] = matrix_1[i][j];
}

void mulMatrix(int row, int col, int * matrix_1[], int * matrix_2[], int * result[]) {
    for (size_t i = 0; i < row; i++)
        for (size_t j = 0; j < row; j++) {
            int sum = 0;
            for (size_t k = 0; k < row; k++)
                sum += matrix_1[i][k] * matrix_2[k][j];
            result[i][j] = sum;
        }
}