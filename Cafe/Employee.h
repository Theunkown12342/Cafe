#pragma once
#include <string>
using namespace std;
class Employee 
{
protected:
	string name;
public:
	Employee(const string& n);
	virtual string getRole() const = 0;
	virtual void performDuty() const = 0;
	virtual ~Employee() {}
};

