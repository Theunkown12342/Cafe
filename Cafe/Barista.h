#pragma once
#include "Employee.h"
class Barista : public Employee
{
public:
	Barista(string n);
	string getRole() const override;
	void performDuty() const;
};