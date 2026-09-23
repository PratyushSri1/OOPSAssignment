#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;

public:
    Student() {
        name = "Pratyush";
        rollNo = 101;
    }

    void display() {
        cout << "Name: " << name << "\nRoll No: " << rollNo;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}