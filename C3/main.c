#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main(int argc, char const *argv[]) {

    matrix myMatrix;
    myMatrix.data_size = 0;
    myMatrix.rows = 0;
    myMatrix.cols = 0;

    coordinate pos;

    pos.row = 1;
    pos.col = 4;
    setElem(&myMatrix, pos, 3);
    pos.row = 3;
    pos.col = 4;
    setElem(&myMatrix, pos, 6);
    pos.row = 4;
    pos.col = 4;
    setElem(&myMatrix, pos, 9);
    pos.row = 0;
    pos.col = 0;
    setElem(&myMatrix, pos, 4);
    pos.row = 0;
    pos.col = 1;
    setElem(&myMatrix, pos, 5);

    for (size_t i = 0; i < myMatrix.data_size_filled; i++) {
        printf("myMatrix.data_size_filled: %d\n", myMatrix.data_size_filled);
        printf("myMatrix.data_size: %d\n", myMatrix.data_size);
        printf("myMatrix.rows: %d\n", myMatrix.rows);
        printf("myMatrix.cols: %d\n", myMatrix.cols);
        printf("myMatrix.data[i].c.row: %d\n", myMatrix.data[i].c.row);
        printf("myMatrix.data[i].c.col: %d\n", myMatrix.data[i].c.col);
        printf("myMatrix.data[i].data: %d\n", myMatrix.data[i].data);
        printf("\n");
    }

    return 0;
}
