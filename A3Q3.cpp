#include <iostream>
using namespace std;

class Employee {
private:
    float salary;

public:
    Employee(float s) {
        salary = s;
    }

    friend void compare(Employee e1, Employee e2);
};

void compare(Employee e1, Employee e2) {
    if(e1.salary > e2.salary)
        cout << "Higher Salary = " << e1.salary;
    else
        cout << "Higher Salary = " << e2.salary;
}

int main() {
    Employee e1(50000);
    Employee e2(70000);

    compare(e1, e2);
    return 0;
}