#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1;
    Complex c2(5, 3);

    c1.display();
    cout << endl;
    c2.display();

    return 0;
}