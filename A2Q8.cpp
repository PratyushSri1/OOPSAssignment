#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor\n";
    }

    ~Demo() {
        cout << "Destructor\n";
    }
};

void test() {
    Demo d2;
    cout << "Inside function\n";
}

int main() {
    Demo d1;
    cout << "Inside main\n";

    test();

    cout << "Back to main\n";

    return 0;
}