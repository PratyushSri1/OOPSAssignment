#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName() {
        cin >> name;
    }
};

class Employee : public Person {
protected:
    int id;

public:
    void setEmployee() {
        setName();
        cin >> id;
    }
};

class Manager : public Employee {
    string department;

public:
    void setManager() {
        setEmployee();
        cin >> department;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department;
    }
};

int main() {
    Manager m;

    cout << "Enter Name ID Department: ";
    m.setManager();
    m.display();

    return 0;
}