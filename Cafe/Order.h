#pragma once
#include "Customer.h"
class Order 
{
private:
    Customer* customer;
public:
    Order(Customer* c);
    void completeOrder();
};

