#include "functions.h"

void loadMatrix(int size, int matrix[size][size]) {
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++)
            matrix[i][j] = pow(2, i * size + j);
}

void showMatrix(int size, int matrix[size][size]) {
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

void sumMatrix(int size, int matrix_1[size][size], int matrix_2[size][size], int result[size][size]) {
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++)
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
}

void scalarProductMatrix(int size, int matrix_1[size][size], int scalar, int result[size][size]) {
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++)
            result[i][j] = scalar * matrix_1[i][j];
}

void transposeMatrix(int size, int matrix_1[size][size], int result[size][size]) {
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++)
            result[j][i] = matrix_1[i][j];
}

void mulMatrix(int size, int matrix_1[size][size], int matrix_2[size][size], int result[size][size]) {
    for (size_t i = 0; i < size; i++)
        for (size_t j = 0; j < size; j++) {
            int sum = 0;
            for (size_t k = 0; k < size; k++)
                sum += matrix_1[i][k] * matrix_2[k][j];
            result[i][j] = sum;
        }
}