#pragma once
#include<iostream>
using namespace std;
class Menue
{
public:
	virtual ~Menue(){}
	virtual string getName() const = 0;
	virtual double getPrice() const = 0;
	virtual string getDescription() const = 0;
	


};

