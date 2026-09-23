#include <iostream>
using namespace std;

struct Student {
    string name, degree, hostel;
    int roll;
    float cgpa;

    void addDetails() {
        cout << "Name Roll Degree Hostel CGPA: ";
        cin >> name >> roll >> degree >> hostel >> cgpa;
    }

    void updateDetails() {
        cout << "Enter new Name: ";
        cin >> name;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displaydetails() {
        cout << name << " " << roll << " "
             << degree << " " << hostel << " " << cgpa;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displaydetails();

    return 0;
}