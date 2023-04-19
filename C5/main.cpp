#include "./Student.h"
#include <iostream>

using namespace std;

int main() {
    Student yo("Hector", "Ulloa", 2, 2, 1998);
    cout << yo.GetAge() << endl;
    return 0;
}