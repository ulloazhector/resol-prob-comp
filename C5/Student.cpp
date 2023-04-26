#include "./Student.h"

Student::Student(string _name, string _lastName, int _day, int _month, int _year) {
    name = _name;
    lastName = _lastName;
    day = _day;
    month = _month;
    year = _year;

    length = 20;
    aprovedSubjectsArray = new string[length];
}

int Student::GetAge() {
    int diff = YEAR - year;

    if (month < MONTH)
        return diff;
    else if (month == MONTH)
        return day >= DAY ? diff : diff - 1;
    else
        return diff - 1;
}

void Student::SetCareer(string _career) {
    career = _career;
}

void Student::AddAprovedSubject(string _subject) {
    aprovedSubjectsArray[aprovedSubjects] = _subject;
    aprovedSubjects++;

    // if(aprovedSubjects == length){
    //     length *= 2;
    // }
}

void Student::GetInfo() {
    cout << name << " " << lastName << endl
         << "Career: " << career << endl;

    cout << "Approved subjects:" << endl;

    for (size_t i = 0; i < aprovedSubjects; i++)
        cout << aprovedSubjectsArray[i] << endl;
}

Student::~Student() {
}