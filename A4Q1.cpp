#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void acceptPerson() {
        cin >> name >> age;
    }
};

class Student : public Person {
    int roll;
    string course;

public:
    void accept() {
        acceptPerson();
        cin >> roll >> course;
    }

    void display() {
        cout << name << " " << age << " "
             << roll << " " << course;
    }
};

int main() {
    Student s;

    cout << "Enter Name Age Roll Course: ";
    s.accept();
    s.display();

    return 0;
}