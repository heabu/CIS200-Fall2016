#include "GenericItem.hpp"
#include "ProduceItem.hpp"

#include "GenericItem.hpp"
#include <iostream>

ProduceItem::ProduceItem(string name, int quantity, string expirationDate) : GenericItem(name, quantity)
{
	SetExpiration(expirationDate);
}

void ProduceItem::SetExpiration(string newDate) {
	expirationDate = newDate;
};

string ProduceItem::GetExpiration() {
	return expirationDate;
};

void ProduceItem::PrintItem() {
	cout << itemName << " " << itemQuantity
		<< " (Expires: " << expirationDate << ")"
		<< endl;
};
