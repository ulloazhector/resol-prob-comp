#include "./Student.h"
#include <iostream>

using namespace std;

int main() {
    Student yo("Hector", "Ulloa", 2, 2, 1998);
    yo.SetCareer("Ing. Electronica");
    
    yo.AddAprovedSubject("Probabilidad 1");
    yo.AddAprovedSubject("Probabilidad 2");
    yo.AddAprovedSubject("Probabilidad 3");
    yo.AddAprovedSubject("Probabilidad 4");
    yo.AddAprovedSubject("Probabilidad 5");

    // cout << yo.GetAge() << endl;
    yo.GetInfo();
    return 0;
}