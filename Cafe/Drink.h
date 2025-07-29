#pragma once
#include "Menue.h"
class Drink :
    public Menue 
{
private:
    string name;
    double price;
    bool ice;
public:
    Drink(string n, double p, bool isIced);
    string getName() const;
    double getPrice() const;
    string getDescription() const;
};

