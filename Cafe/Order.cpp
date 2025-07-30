#include "Order.h"

Order::Order(Customer* c): customer(c){}

void Order::completeOrder()
{
	customer->showReceipt();
}
