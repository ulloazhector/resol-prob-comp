#include "functions.h"

void callocMatrix(TMatrix *matrix) {
    matrix->values = (float **)calloc(matrix->rows, sizeof(float *));
    if (!matrix->values) {
        printf("error\n");
        exit(-1);
    }

    for (size_t i = 0; i < matrix->rows; i++) {
        matrix->values[i] = (float *)calloc(matrix->cols, sizeof(float));
        if (!matrix->values[i]) {
            printf("error\n");
            exit(-1);
        }
    }
}

void showMatrix(TMatrix matrix) {
    for (size_t i = 0; i < matrix.rows; i++) {
        for (size_t j = 0; j < matrix.cols; j++)
            printf("%.3f\t", matrix.values[i][j]);
        printf("\n");
    }
}

void loadMatrixFromFile(TMatrix *matrix, FILE *fptr) {
    fscanf(fptr, "%d%d", &matrix->rows, &matrix->cols);
    callocMatrix(matrix);

    for (size_t i = 0; i < matrix->rows; i++)
        for (size_t j = 0; j < matrix->cols; j++)
            if (!feof(fptr))
                fscanf(fptr, "%f", &matrix->values[i][j]);

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

TMatrix gaussianEliminationMatrix(TMatrix m1) {
    TMatrix res;
    res.rows = m1.rows;
    res.cols = m1.cols;

    callocMatrix(&res);

    for (size_t i = 0; i < m1.rows; i++)
        for (size_t j = 0; j < m1.cols; j++)
            res.values[i][j] = m1.values[i][j];

    for (size_t i = 0; i < res.rows - 1; i++)
        for (size_t j = i + 1; j < res.rows; j++) {
            float factor = res.values[j][i] / res.values[i][i];

            for (size_t k = 0; k < res.cols; k++)
                res.values[j][k] = res.values[j][k] - res.values[i][k] * factor;
        }

    return res;
}

// return -1 if not in data array
int findIndex(matrix m, coordinate c) {
    for (size_t i = 0; i < m.data_size; i++) {
        if (c.row == m.data[i].c.row && c.col == m.data[i].c.col)
            return i;
    }
    return -1;
}

bool isDef(matrix m, coordinate c) {
    if (c.row > m.rows || c.col > m.cols)
        return false;
    return true;
}

// int getElem(matrix m, coordinate c) {

//     // check return value
//     if (!isDef(m, c))
//         return;

//     int i = findIndex(m, c);
//     if (i != -1)
//         return m.data[i].data;

//     return 0;
// }

void setElem(matrix *m, coordinate c, int value) {
    if (!isDef(*m, c)) {
        m->rows = c.row;
        m->cols = c.col;
    }

    if (m->data_size == 0) {
        m->data = (elem *)malloc(4 * sizeof(elem));
        m->data_size = 4;
    } else if (m->data_size == m->data_size_filled) {
        m->data = (elem *)realloc(m->data, 2 * m->data_size * sizeof(elem));
        m->data_size *= 2;
    }

    if (!m->data) {
        printf("Memory allocation failed :(\n");
        exit(-1);
    }

    m->data[m->data_size_filled].c = c;
    m->data[m->data_size_filled].data = value;
    m->data_size_filled++;
}

void erase(matrix m, coordinate c) {
}