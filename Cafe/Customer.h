#pragma once
#include "Menue.h"
#include <vector>
class Customer 
{
private:
    string name;
    vector<Menue*>purchases;
public:
    Customer(string n);
    void addPurchase(Menue* item);
    void showReceipt() const;

};

