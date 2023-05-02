#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <cstdarg>
#include <iostream>

#define MAX_SIZE 10

using namespace std;
class Polynomial {
    int grade;
    int coef[MAX_SIZE];

public:
    Polynomial(int grade, ...);
    Polynomial(int grade, int coef[]);
    Polynomial(Polynomial &p);

    friend Polynomial operator+ (Polynomial a, Polynomial b);
    friend Polynomial operator* (Polynomial a, Polynomial b);
    void show();
    ~Polynomial();
};

#endif // POLYNOMIAL_H