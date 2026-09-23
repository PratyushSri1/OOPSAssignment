#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float cgpa;

public:
    Student() {
        name = "Unknown";
        roll = 0;
        cgpa = 0;
    }

    Student(string n, int r) {
        name = n;
        roll = r;
        cgpa = 0;
    }

    Student(string n, int r, float c) {
        name = n;
        roll = r;
        cgpa = c;
    }

    void display() {
        cout << name << " " << roll << " " << cgpa << endl;
    }
};

int main() {
    Student s1;
    Student s2("Aman", 102);
    Student s3("Rahul", 103, 8.5);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}