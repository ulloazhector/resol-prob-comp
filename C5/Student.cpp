#include "./Student.h"

Student::Student(string _name, string _lastName, int _day, int _month, int _year) {
    name = _name;
    lastName = _lastName;
    day = _day;
    month = _month;
    year = _year;
}

int Student::GetAge() {
    int diff = YEAR - year;

    if (month < MONTH)
        return YEAR - year;
    else if (month == MONTH)
        return day >= DAY ? diff : diff - 1;
    else
        return diff - 1;
}

void Student::GetInfo() {
    cout << name
         << " "
         << lastName
         << endl;
}

Student::~Student() {
}