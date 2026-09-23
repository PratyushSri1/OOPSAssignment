#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    static void display() {
        cout << "Total Objects = " << count;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;

    Student::display();

    return 0;
}