#include <iostream>
using namespace std;

namespace A {
    int x = 10;

    void show() {
        cout << "A: " << x << endl;
    }
}

namespace B {
    int x = 20;

    void show() {
        cout << "B: " << x << endl;
    }
}

int main() {
    A::show();
    B::show();

    cout << A::x << endl;
    cout << B::x << endl;

    return 0;
}