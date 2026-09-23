#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void set(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }

    Complex sum(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.set(2, 3);
    c2.set(4, 5);

    c3 = c1.sum(c2);

    c3.display();

    return 0;
}