#pragma once
#include "Employee.h"
class Chef :
    public Employee
{
public:
    Chef(const string& n);
    string getRole() const override;
    void performDuty() const override;

};

