#ifndef functions_h
#define functions_h

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float **values;
    int rows, cols;
} TMatrix;

typedef struct coord {
    int row, col;
} coordinate;

typedef struct elem {
    coordinate c;
    int data;
} elem;

typedef struct mat {
    int rows, cols;       // dimensión actual de la matriz
    elem *data;           // array con elementos de la matriz
    int data_size;        // cantidad elementos del array
    int data_size_filled; // cantidad elementos ocupados del array
} matrix;

void callocMatrix(TMatrix *matrix);
void showMatrix(TMatrix matrix);
void loadMatrixFromFile(TMatrix *matrix, FILE *fptr);
void scalarProductMatrix(TMatrix *matrix, float scalar);
TMatrix mulMatrix(TMatrix m1, TMatrix m2);
TMatrix gaussianEliminationMatrix(TMatrix m1);

int findIndex(matrix m, coordinate c);

bool isDef(matrix m, coordinate c);
int getElem(matrix m, coordinate c);
void setElem(matrix *m, coordinate c, int elem);
void erase(matrix m, coordinate c);

#endif /* functions_h */