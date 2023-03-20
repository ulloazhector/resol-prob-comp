#ifndef C2c_funcion_1_h
#define C2c_funcion_1_h

#include <stdio.h>
#include <math.h>

void loadMatrix (int row, int col, int * matrix[]);
void showMatrix (int row, int col, int * matrix[]);
void sumMatrix(int row, int col, int * matrix_1[], int * matrix_2[], int * result[]);
void scalarProductMatrix(int row, int col, int * matrix_1[], int scalar, int * result[]);
void transposeMatrix(int row, int col, int * matrix_1[], int * result[]);
void mulMatrix(int row, int col, int * matrix_1[], int * matrix_2[], int * result[]);

#endif /* C2c_funcion_1_h */
