#include "main.h"

int main(int argc, const char *argv[]) {
    int m1[N][N], m2[N][N], res[N][N];

    loadMatrix(N, m1);
    loadMatrix(N, m2);

    printf("matrix 1:\n");
    showMatrix(N, m1);

    printf("\nmatrix 2:\n");
    showMatrix(N, m2);

    printf("\nmatrix 1 + matrix 2:\n");
    sumMatrix(N, m1, m2, res);
    showMatrix(N, res);

    printf("\nmatrix 1 scaled by -3:\n");
    scalarProductMatrix(N, m1, -3, res);
    showMatrix(N, res);

    printf("\nmatrix 1 transposed:\n");
    transposeMatrix(N, m1, res);
    showMatrix(N, res);

    printf("\nmatrix 1 * matrix 2:\n");
    mulMatrix(N, m1, m2, res);
    showMatrix(N, res);

    return 0;
}
