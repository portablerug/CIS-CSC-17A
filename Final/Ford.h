#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
public:
    Ford(string m, int y, double p);
    void displayDetails() const override;
    void display();
};

#endif // FORD_H
