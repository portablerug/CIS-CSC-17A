// AmericanCars.cpp

#include "AmericanCars.h"

Ford::Ford(std::string m, int y, double p) : Car("Ford", m, y, p) {}

void Ford::displayDetails() const {
    std::cout << "Ford Car Details:\n";
    Car::displayDetails();
}

Chevrolet::Chevrolet(std::string m, int y, double p) : Car("Chevrolet", m, y, p) {}

void Chevrolet::displayDetails() const {
    std::cout << "Chevrolet Car Details:\n";
    Car::displayDetails();
}

Tesla::Tesla(std::string m, int y, double p) : Car("Tesla", m, y, p) {}

void Tesla::displayDetails() const {
    std::cout << "Tesla Car Details:\n";
    Car::displayDetails();
}
