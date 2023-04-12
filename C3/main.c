#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

int main(int argc, char const *argv[]) {

    matrix myMatrix;
    myMatrix.data_size = 0;
    myMatrix.rows = 0;
    myMatrix.cols = 0;

    coordinate pos;

    srand(time(NULL));

    for (size_t i = 0; i < 10; i++) {
        pos.row = rand() % 4;
        pos.col = rand() % 4;
        setElem(&myMatrix, pos, 9);
    }

    printf("myMatrix.data_size_filled: %d\n", myMatrix.data_size_filled);
    printf("myMatrix.data_size: %d\n", myMatrix.data_size);
    for (size_t i = 0; i < myMatrix.data_size_filled; i++) {
        // printf("myMatrix.data_size_filled: %d\n", myMatrix.data_size_filled);
        // printf("myMatrix.data_size: %d\n", myMatrix.data_size);
        // printf("myMatrix.rows: %d\n", myMatrix.rows);
        // printf("myMatrix.cols: %d\n", myMatrix.cols);
        printf("(%d, %d)\n", myMatrix.data[i].c.row, myMatrix.data[i].c.col);
        // printf("myMatrix.data[i].data: %d\n", myMatrix.data[i].data);
    }

    return 0;
}
