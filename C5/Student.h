#ifndef STUDENT_H
#define STUDENT_H

#define YEAR 2023
#define MONTH 4
#define DAY 19

#include <iostream>

using namespace std;

class Student {
    string name;
    string lastName;
    int day, month, year;

    string career;
    int aprovedSubjects;
    string * aprovedSubjectsArray;
    int length;

public:
    Student(string name, string lastName, int day, int month, int year);
    int GetAge();
    void SetCareer(string career);
    void AddAprovedSubject(string subject);

    void GetInfo();
    ~Student();
};

#endif // STUDENT_H