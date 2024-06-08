#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
public:
    Tesla(string m, int y, double p);
    void displayDetails() const override;
    void display();
};

#endif // TESLA_H
