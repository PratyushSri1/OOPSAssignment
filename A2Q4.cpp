#include <iostream>
using namespace std;

class Box {
    int length, width, height;

public:
    Box() {
        length = width = height = 1;
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void volume() {
        cout << "Volume = " << length * width * height << endl;
    }
};

int main() {
    Box b1;
    Box b2(2, 3, 4);

    b1.volume();
    b2.volume();

    return 0;
}