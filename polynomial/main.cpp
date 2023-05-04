#include "Polynomial.h"

int main() {
    Polynomial p1(2, 1, 4, 4), p2(1, 4, 4), p3(3,1,3,0,1);
    Polynomial p4 = p1 + p2 + p3;

    Polynomial p5 = p1 * p3 * 2;

    p4.show();
    p5.show();

    return 0;
}