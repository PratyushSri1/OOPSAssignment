#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float cgpa;

    void updateCGPA() {
        cin >> cgpa;
    }

public:
    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "Enter new name: ";
        cin >> name;
    }

    void displaydetails() {
        cout << "Name: " << name << "\nCGPA: " << cgpa;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.updateDetails();
    s.displaydetails();

    return 0;
}