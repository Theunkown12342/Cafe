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
    string getName() const override;
    double getPrice() const override;
    string getDescription() const override;

};

