#pragma once
#include "Menue.h"
class Food :
    public Menue
{
private:
    string name;
    double price;
    bool vegetarian;
public:
    Food(string n, double p, bool veg);
    string getName() const;
    double getPrice() const;
    string getDescription() const;

};

