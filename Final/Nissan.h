#ifndef NISSAN_H
#define NISSAN_H

#include "JapaneseCar.h"

class Nissan : public JapaneseCar {
public:
    Nissan(string m, int y, double p);
    void displayDetails() override;
    void display() override;
};

#endif // NISSAN_H
