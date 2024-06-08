#ifndef JAPANESECAR_H
#define JAPANESECAR_H

#include <iostream>
#include <string>
using namespace std;

class JapaneseCar {
protected:
    string brand;
    string model;
    int year;
    double price;
public:
    JapaneseCar(string b, string m, int y, double p);
    virtual void displayDetails();
    virtual void display();
    virtual ~JapaneseCar();
};

#endif // JAPANESECAR_H
