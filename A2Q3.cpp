#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "ID: " << id << "\n";
        cout << "Salary: " << salary;
    }
};

int main() {
    Employee e("Rahul", 101, 50000);
    e.display();
    return 0;
}