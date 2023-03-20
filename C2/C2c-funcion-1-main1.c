#include "C2c-funcion-1-main.h"

int main(int argc, const char * argv[]) {
    int m1[ROWS][COLS], m2[ROWS][COLS];

    loadMatrix(ROWS, COLS, m1);
    loadMatrix(ROWS, COLS, m2);
    showMatrix(ROWS, COLS, m1);
    showMatrix(ROWS, COLS, m2);

    return 0;
}
