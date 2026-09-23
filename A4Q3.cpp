#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void setAcademic() {
        cin >> marks;
    }
};

class Sports {
protected:
    int score;

public:
    void setSports() {
        cin >> score;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {
        cout << "Marks = " << marks << endl;
        cout << "Sports Score = " << score << endl;
        cout << "Total = " << marks + score;
    }
};

int main() {
    Result r;

    cout << "Enter Marks and Sports Score: ";
    r.setAcademic();
    r.setSports();

    r.display();

    return 0;
}