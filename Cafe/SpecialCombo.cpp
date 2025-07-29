#include "SpecialCombo.h"

SpecialCombo:: SpecialCombo(string n, double p, string det): name(n), price(p), details(det){}

string SpecialCombo::getName() const
{
	return  name;
}
double SpecialCombo::getPrice() const
{
	return price;
}
string SpecialCombo::getDescription() const
{
	return name + " - " + details;
}

