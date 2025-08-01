#include "Customer.h"
#include <iostream>

Customer::Customer(string n): name(n){}

void Customer::addPurchase(Menue* item)
{
	purchases.push_back(item);
}
void Customer::showReceipt() const
{
	cout << " Receipt for " << name << ":"
		<<endl;
	double total = 0;
	for (auto item : purchases) {
		cout << "- " << item->getDescription()
			<< " : $" << item->getPrice() << endl;
		total += item->getPrice();
	}
	cout << "Total: " << total << endl;
}
