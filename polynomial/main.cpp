#include "Polynomial.h"

int main() {
    Polynomial p1(2, 1, 4, 4), p2(1, 4, 4), p3(3,1,1,0,1), px(0, 2);
    Polynomial p4 = p1 + p2 + p3;

    Polynomial p5 = p3 * p3;

    // p2.show();

    return 0;
}