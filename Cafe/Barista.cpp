#include "Barista.h"
#include <iostream>
Barista:: Barista(string n): Employee(n){}
string Barista::getRole() const
{
	return "Barista";
}
void Barista::performDuty() const
{
	cout << name << " is preparing a drink." << endl;
}