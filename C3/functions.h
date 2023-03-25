#ifndef functions_h
#define functions_h

#include <stdio.h>
#include <stdlib.h>

typedef struct  {
    int **values;
    int rows, cols;
} TMatrix;

void callocMatrix(TMatrix *matrix);

#endif /* functions_h */