#include <iostream>
using namespace std;

class College {
protected:
    string college;

public:
    College(string c) {
        college = c;
        cout << "College Constructor\n";
    }
};

class Department : public College {
    string dept;

public:
    Department(string c, string d) : College(c) {
        dept = d;
        cout << "Department Constructor\n";
    }

    void display() {
        cout << "College: " << college << endl;
        cout << "Department: " << dept;
    }
};

int main() {
    Department d("Thapar", "MCA");

    d.display();

    return 0;
}