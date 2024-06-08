#include <iostream>
#include <iomanip>
#include "Toyota.h"
#include "Honda.h"
#include "Nissan.h"
#include "Ford.h"
#include "Chevrolet.h"
#include "Tesla.h"

using namespace std;

// JapaneseCar implementation
JapaneseCar::JapaneseCar(string b, string m, int y, double p)
    : brand(b), model(m), year(y), price(p) {}

void JapaneseCar::displayDetails() {
    cout << "Brand: " << brand << endl << "Model: " << model
         << endl << "Year: " << year << endl << "Price: $" << price << endl;
}

void JapaneseCar::display() {
    cout << brand << " " << endl;
}

JapaneseCar::~JapaneseCar() {}

// Toyota implementation
Toyota::Toyota(string m, int y, double p)
    : JapaneseCar("Toyota", m, y, p) {}

void Toyota::displayDetails() {
    cout << "Toyota Car Details:\n";
    JapaneseCar::displayDetails();
}

void Toyota::display() {
    cout << brand << " " << model << " " << year;
}

// Honda implementation
Honda::Honda(string m, int y, double p)
    : JapaneseCar("Honda", m, y, p) {}

void Honda::displayDetails() {
    cout << "Honda Car Details:\n";
    JapaneseCar::displayDetails();
}

void Honda::display() {
    cout << brand << " " << model << " " << year;
}

// Nissan implementation
Nissan::Nissan(string m, int y, double p)
    : JapaneseCar("Nissan", m, y, p) {}

void Nissan::displayDetails() {
    cout << "Nissan Car Details:\n";
    JapaneseCar::displayDetails();
}

void Nissan::display() {
    cout << brand << " " << model << " " << year;
}

// Car implementation
Car::Car(string b, string m, int y, double p)
    : brand(b), model(m), year(y), price(p) {}

void Car::displayDetails() const {
    cout << "Brand: " << brand << endl << "Model: " << model
         << endl << "Year: " << year << endl << "Price: $" << price << endl;
}

Car::~Car() {}

// Ford implementation
Ford::Ford(string m, int y, double p)
    : Car("Ford", m, y, p) {}

void Ford::displayDetails() const {
    cout << "Ford Car Details:\n";
    Car::displayDetails();
}

void Ford::display() {
    cout << brand << " " << model << " " << year;
}

// Chevrolet implementation
Chevrolet::Chevrolet(string m, int y, double p)
    : Car("Chevrolet", m, y, p) {}

void Chevrolet::displayDetails() const {
    cout << "Chevrolet Car Details:\n";
    Car::displayDetails();
}
void Chevrolet::display() {
    cout << brand << " " << model << " " << year;
}

// Tesla implementation
Tesla::Tesla(string m, int y, double p)
    : Car("Tesla", m, y, p) {}

void Tesla::displayDetails() const {
    cout << "Tesla Car Details:\n";
    Car::displayDetails();
}
void Tesla::display() {
    cout << brand << " " << model << " " << year;
}

int main() {
    //Variable
    int choice;

    cout << "|----------------------------------|" << endl;
    cout << "|  Welcome to Miguels Dealership!  |" << endl;
    cout << "|  Please select a car type that   |" << endl;
    cout << "|  interests you the most!         |" << endl;
    cout << "|Press 1 or 2:                     |" << endl;
    cout << "|  1.Japanese Imports              |" << endl;
    cout << "|  2.American Made                 |" << endl;
    cout << "|__________________________________|" << endl;

    //Car info
    Toyota toyotaCar("Camry", 2022, 30000);
    Honda hondaCar("Civic", 2023, 25000);
    Nissan nissanCar("Altima", 2021, 27000);

    Ford fordCar("Mustang", 2022, 55000);
    Chevrolet chevroletCar("Malibu", 2021, 24000);
    Tesla teslaCar("Model 3", 2023, 40000);

    cin >> choice;
    cout << endl;
    if (choice == 1) {
        cout << "|----------------------------------|" << endl;
        cout << "|  You chose Japanese cars.        |" << endl;
        cout << "|  These are our current models    |" << endl;
        cout << "|Please select a car for more info |" << endl;
        cout << "|  1."; toyotaCar.display(); cout << setw(14) << "|" << endl;
        cout << "|  2."; hondaCar.display(); cout << setw(15) << "|" << endl;
        cout << "|  3."; nissanCar.display(); cout << setw(13) << "|" << endl;
        cout << "|__________________________________|" << endl;

        /*
        toyotaCar.displayDetails();
        cout << endl;
        hondaCar,displayDetails();
        cout << endl;
        nissanCar.displayDetails();
        cout<< endl;
        */
    } else if (choice == 2) {
        cout << "|----------------------------------|" << endl;
        cout << "|  You chose American cars.        |" << endl;
        cout << "|  These are our current models    |" << endl;
        cout << "|Please select a car for more info |" << endl;
        cout << "|  1."; fordCar.display(); cout << setw(14) << "|" << endl;
        cout << "|  2."; chevroletCar.display(); cout << setw(10) << "|" << endl;
        cout << "|  3."; teslaCar.display(); cout << setw(13) << "|" << endl;
        cout << "|__________________________________|" << endl;
        
        /*
        fordCar.displayDetails();
        cout << endl;
        chevroletCar.displayDetails();
        cout << endl;
        teslaCar.displayDetails();
        */
    } else {
        cout << "Invalid choice!" << endl;
    }

    //Exit
    return 0;
}


