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
    fscanf(fptr, "%d%d", &matrix->rows, &matrix->cols);
    callocMatrix(matrix);

    for (size_t i = 0; i < matrix->rows; i++)
        for (size_t j = 0; j < matrix->cols; j++)
            if (!feof(fptr))
                fscanf(fptr, "%d", &matrix->values[i][j]);

    fclose(fptr);
}

void scalarProductMatrix(TMatrix *matrix, float scalar) {
    for (size_t i = 0; i < matrix->rows; i++)
        for (size_t j = 0; j < matrix->cols; j++)
            matrix->values[i][j] = scalar * matrix->values[i][j];
}

TMatrix mulMatrix(TMatrix m1, TMatrix m2) {
    TMatrix res;
    if (m1.cols != m2.rows)
        exit(-1);

    res.rows = m1.rows;
    res.cols = m2.cols;

    callocMatrix(&res);

    for (size_t i = 0; i < res.rows; i++)
        for (size_t j = 0; j < res.cols; j++) {
            int acum = 0;
            for (size_t k = 0; k < m1.cols; k++)
                acum += m1.values[i][k] * m2.values[k][j];
            res.values[i][j] = acum;
        }

    return res;
}