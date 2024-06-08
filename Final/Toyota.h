#ifndef TOYOTA_H
#define TOYOTA_H

#include "JapaneseCar.h"

class Toyota : public JapaneseCar {
public:
    Toyota(string m, int y, double p);
    void displayDetails() override;
    void display() override;
};

#endif // TOYOTA_H
