#include "Food.h"

Food::Food(string n, double p, bool veg) : name(n), price(p), vegetarian(veg){}


string Food::getName() const
{
	return name;
}
double Food::getPrice() const
{
	return price;
}
string Food::getDescription() const
{
	return name + (vegetarian ? "(Vegetarian)" : " ");

}
