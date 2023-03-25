#ifndef functions_h
#define functions_h

#include <stdio.h>
#include <math.h>

void loadMatrix(int size, int matrix[size][size]);
void showMatrix(int size, int matrix[size][size]);
void sumMatrix(int size, int matrix_1[size][size], int matrix_2[size][size], int result[size][size]);
void scalarProductMatrix(int size, int matrix_1[size][size], int scalar, int result[size][size]);
void transposeMatrix(int size, int matrix_1[size][size], int result[size][size]);
void mulMatrix(int size, int matrix_1[size][size], int matrix_2[size][size], int result[size][size]);

#endif /* functions_h */
