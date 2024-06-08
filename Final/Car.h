#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string brand;
    string model;
    int year;
    double price;
public:
    Car(string b, string m, int y, double p);
    virtual void displayDetails() const;
    virtual ~Car();
};

#endif // CAR_H
