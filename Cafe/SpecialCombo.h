#pragma once
#include "Menue.h"
class SpecialCombo :
    public Menue
{
private:
    string name;
    double price;
    string details;

public:
    SpecialCombo(string n, double p, string det);
    string getName() const;
    double getPrice() const;
    string getDescription() const;
};

