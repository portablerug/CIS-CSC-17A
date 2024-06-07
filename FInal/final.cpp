#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//Cars
// Base class
class JapaneseCar {
protected:
    string brand;
    string model;
    int year;
    double price;
public:
    // Constructor
    JapaneseCar(string b, string m, int y, double p)
        : brand(b), model(m), year(y), price(p) {}

    // Virtual method to display car details
    virtual void displayDetails() {
        cout << "Brand: " << brand << "\nModel: " << model
                  << "\nYear: " << year << "\nPrice: $" << price << endl;
    }
    // Virtual destructor
    virtual ~JapaneseCar() {}
};

// Derived class for Toyota
class Toyota : public JapaneseCar {
public:
    Toyota(string m, int y, double p)
        : JapaneseCar("Toyota", m, y, p) {}

    void displayDetails() override {
        cout << "Toyota Car Details:\n";
        JapaneseCar::displayDetails();
    }
};

// Derived class for Honda
class Honda : public JapaneseCar {
public:
    Honda(string m, int y, double p)
        : JapaneseCar("Honda", m, y, p) {}

    void displayDetails() override {
        cout << "Honda Car Details:\n";
        JapaneseCar::displayDetails();
    }
};

// Derived class for Nissan
class Nissan : public JapaneseCar {
public:
    Nissan(string m, int y, double p)
        : JapaneseCar("Nissan", m, y, p) {}

    void displayDetails() override {
        cout << "Nissan Car Details:\n";
        JapaneseCar::displayDetails();
    }
};

int main(){
    //Define Variables
    
    //Initialize variables

    //Backend
    Toyota toyotaCar("Camry", 2022, 30000);
    Honda hondaCar("Civic", 2023, 25000);
    Nissan nissanCar("Altima", 2021, 27000);

    toyotaCar.displayDetails();
    cout << endl;
    hondaCar.displayDetails();
    cout << endl;
    nissanCar.displayDetails();


    //Exit
    return 0;
}