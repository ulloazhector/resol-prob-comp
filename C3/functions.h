#ifndef functions_h
#define functions_h

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float **values;
    int rows, cols;
} TMatrix;

void callocMatrix(TMatrix *matrix);
void showMatrix(TMatrix matrix);
void loadMatrixFromFile(TMatrix *matrix, FILE *fptr);
void scalarProductMatrix(TMatrix *matrix, float scalar);
TMatrix mulMatrix(TMatrix m1, TMatrix m2);
TMatrix gaussianEliminationMatrix(TMatrix m1);

#endif /* functions_h */