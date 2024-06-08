#ifndef HONDA_H
#define HONDA_H

#include "JapaneseCar.h"

class Honda : public JapaneseCar {
public:
    Honda(string m, int y, double p);
    void displayDetails() override;
    void display() override;
};

#endif // HONDA_H
