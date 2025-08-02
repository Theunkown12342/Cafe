#include "Drink.h"
#include "Food.h"
#include "Employee.h"
#include "Barista.h"
#include "Chef.h"
#include "Order.h"
#include "SpecialCombo.h"
#include "Customer.h"
#include <iostream>
#include <vector>




int main()
{
	//This creates the Menue that I decided on 
	Menue* latte = new Drink("Latte", 3.50, false);
	Menue* orange = new Drink("Orange juice", 2.50, false);
	Menue* sandwich = new Food("Bacon Sandwich", 2.50, false);
	Menue* muffins = new Food("English muffin", 3.50, false);
	Menue* scones = new Food("Bluebrry or Chocolate chip scones", 4.50, false);
	Menue* combo = new SpecialCombo("Lunch Combo", 10.50, "Latte + Bacon Sandwich");
	

	//This creates the customer which is me and I make the purchases 
	Customer* Irvin = new Customer("Irvin");
	Irvin->addPurchase(latte);
	Irvin->addPurchase(orange);
	Irvin->addPurchase(sandwich);
	Irvin->addPurchase(muffins);
	Irvin->addPurchase(scones);
	Irvin->addPurchase(combo);

	Order order(Irvin);
	order.completeOrder();

	//Employees do their tast or duty
	Barista b("Michael");
	Chef c("Samantha");

	b.performDuty();
	c.performDuty();

	delete latte;
	delete orange;
	delete sandwich;
	delete muffins;
	delete scones;
	delete combo;
}
