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
    string getName() const override;
    double getPrice() const override;
    string getDescription() const override;

 
};

