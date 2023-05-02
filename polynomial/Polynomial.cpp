#include "Polynomial.h"

Polynomial::Polynomial(int grade, ...) {
    this->grade = grade;
    va_list list;

    va_start(list, grade);

    for (size_t i = 0; i < grade + 1; i++)
        coef[i] = va_arg(list, int);

    for (size_t i = grade + 1; i < MAX_SIZE; i++)
        coef[i] = 0;

    va_end(list);
}

Polynomial::Polynomial(int grade, int coef[]) {
    this->grade = grade;

    for (size_t i = 0; i < grade + 1; i++)
        this->coef[i] = coef[i];

    for (size_t i = grade + 1; i < MAX_SIZE; i++)
        this->coef[i] = 0;
}

Polynomial::Polynomial(Polynomial &p) {
    grade = p.grade;

    for (size_t i = 0; i < grade + 1; i++)
        coef[i] = p.coef[i];

    for (size_t i = grade + 1; i < MAX_SIZE; i++)
        coef[i] = 0;
}

Polynomial::~Polynomial() {
}

void Polynomial::show() {
    for (size_t i = 0; i < grade + 1; i++)
        cout << coef[i] << " ";
    cout << endl;
}

Polynomial operator+(Polynomial a, Polynomial b) {
    int newGrade = (a.grade > b.grade) ? a.grade : b.grade;
    int newCoef[newGrade + 1];

    for (size_t i = 0; i < newGrade + 1; i++)
        newCoef[i] = a.coef[i] + b.coef[i];

    Polynomial res(newGrade, newCoef);
    return res;
}

Polynomial operator*(Polynomial a, Polynomial b) {
    int newGrade = a.grade + b.grade - 1;
    int newCoef[newGrade + 1];

    int sum;

    cout << "a.grade: " << a.grade << endl;
    cout << "b.grade: " << b.grade << endl
         << endl;

    for (int i = 0; i < b.grade + 1; i++) {
        for (int j = 0; j <= i && j < a.grade + 1; j++) {
            cout << "a_" << j << " b_" << i - j << " + ";
        }
        cout << endl;
    }

    for (int i = 1; i < a.grade + 1; i++) {
        for (int j =0; j < b.grade + 1 && i + j < a.grade + 1; j++) {
            cout << "a_" << i + j << " b_" << b.grade - j << " + ";
        }
        cout << endl;
    }

    Polynomial res(newGrade, newCoef);
    return res;
}
