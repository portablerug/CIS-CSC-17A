// Car.cpp

#include "Car.h"

Car::Car(std::string b, std::string m, int y, double p)
    : brand(b), model(m), year(y), price(p) {
    if (y < 1886 || y > 2024) {
        throw std::invalid_argument("Invalid year for the car.");
    }
    if (p < 0) {
        throw std::invalid_argument("Price cannot be negative.");
    }
}

void Car::display() const {
    std::cout << model << " (" << year << ")";
}

void Car::displayDetails() const {
    std::cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << year << "\nPrice: $" << price << std::endl;
}
