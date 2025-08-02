#include "Chef.h"

#include <iostream>
Chef:: Chef(const string& n) : Employee(n){}
string Chef:: getRole() const
{
	return "Chef";
}
void Chef:: performDuty() const
{
	cout << name << " is preparing food" << endl;
}
