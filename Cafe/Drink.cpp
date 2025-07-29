#include "Drink.h"

Drink::Drink(string n, double p, bool isIced) : name(n), price(p), ice(isIced){}
string Drink::getName() const 
{
	return name;
}
double Drink::getPrice() const 
{
	return price;
}
string Drink::getDescription() const 
{
	return name + (ice ? "(iced)" : "(Hot)");
}
