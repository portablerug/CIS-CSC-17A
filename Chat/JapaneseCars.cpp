// JapaneseCars.cpp

#include "JapaneseCars.h"

Toyota::Toyota(std::string m, int y, double p) : Car("Toyota", m, y, p) {}

void Toyota::displayDetails() const {
    std::cout << "Toyota Car Details:\n";
    Car::displayDetails();
}

Honda::Honda(std::string m, int y, double p) : Car("Honda", m, y, p) {}

void Honda::displayDetails() const {
    std::cout << "Honda Car Details:\n";
    Car::displayDetails();
}

Nissan::Nissan(std::string m, int y, double p) : Car("Nissan", m, y, p) {}

void Nissan::displayDetails() const {
    std::cout << "Nissan Car Details:\n";
    Car::displayDetails();
}
