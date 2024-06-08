// Car.h

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <stdexcept>

class Car {
protected:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Car(std::string b, std::string m, int y, double p);

    virtual void display() const;
    virtual void displayDetails() const;

    virtual ~Car() {}
};

#endif // CAR_H
