#include <iostream>
using namespace std;

int main() {
    // for - all parts
    for(int i=0; i<5; i++)
        cout << i << " ";

    cout << "\n";

    // for - initialization omitted
    int i = 0;
    for(; i<5; i++)
        cout << i << " ";

    cout << "\n";

    // for - increment omitted
    i = 0;
    for(; i<5;) {
        cout << i << " ";
        i++;
    }

    cout << "\n";

    // while
    i = 0;
    while(i < 5) {
        cout << i << " ";
        i++;
    }

    cout << "\n";

    // do-while
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while(i < 5);

    return 0;
}