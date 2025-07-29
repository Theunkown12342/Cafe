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
    void getName() const override;
    void getPrice() const override;
    string getDescription() const override;
};

