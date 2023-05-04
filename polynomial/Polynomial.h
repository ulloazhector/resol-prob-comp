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
    // constructors
    Polynomial(int grade, ...);
    Polynomial(int grade, int coef[]);
    Polynomial(Polynomial &p);

    // methods
    friend Polynomial operator+(Polynomial a, Polynomial b);
    friend Polynomial operator+(int a, Polynomial b);
    friend Polynomial operator+(Polynomial a, int b);

    friend Polynomial operator*(Polynomial a, Polynomial b);
    friend Polynomial operator*(int a, Polynomial b);
    friend Polynomial operator*(Polynomial a, int b);
    void show();
    ~Polynomial();
};

#endif // POLYNOMIAL_H