#ifndef CHEVROLET_H
#define CHEVROLET_H

#include "Car.h"

class Chevrolet : public Car {
public:
    Chevrolet(string m, int y, double p);
    void displayDetails() const override;
    void display();
};

#endif // CHEVROLET_H
