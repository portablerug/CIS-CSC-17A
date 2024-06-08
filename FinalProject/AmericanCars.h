// AmericanCars.h

#ifndef AMERICAN_CARS_H
#define AMERICAN_CARS_H

#include "Car.h"

class Ford : public Car {
public:
    Ford(std::string m, int y, double p);

    void displayDetails() const override;
};

class Chevrolet : public Car {
public:
    Chevrolet(std::string m, int y, double p);

    void displayDetails() const override;
};

class Tesla : public Car {
public:
    Tesla(std::string m, int y, double p);

    void displayDetails() const override;
};

#endif // AMERICAN_CARS_H
