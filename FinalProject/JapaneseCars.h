// JapaneseCars.h

#ifndef JAPANESE_CARS_H
#define JAPANESE_CARS_H

#include "Car.h"

class Toyota : public Car {
public:
    Toyota(std::string m, int y, double p);

    void displayDetails() const override;
};

class Honda : public Car {
public:
    Honda(std::string m, int y, double p);

    void displayDetails() const override;
};

class Nissan : public Car {
public:
    Nissan(std::string m, int y, double p);

    void displayDetails() const override;
};

#endif // JAPANESE_CARS_H
