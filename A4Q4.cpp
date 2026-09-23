#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand, model;

public:
    void setVehicle() {
        cin >> brand >> model;
    }
};

class Car : public Vehicle {
    int doors;

public:
    void setCar() {
        setVehicle();
        cin >> doors;
    }

    void display() {
        cout << "Car: " << brand << " "
             << model << " " << doors << " doors\n";
    }
};

class Bike : public Vehicle {
    int engine;

public:
    void setBike() {
        setVehicle();
        cin >> engine;
    }

    void display() {
        cout << "Bike: " << brand << " "
             << model << " " << engine << " CC";
    }
};

int main() {
    Car c;
    Bike b;

    cout << "Enter Car Brand Model Doors: ";
    c.setCar();

    cout << "Enter Bike Brand Model EngineCC: ";
    b.setBike();

    c.display();
    b.display();

    return 0;
}