#include "GenericItem.hpp"

#include <iostream>
#include <string>
using namespace std;

GenericItem::GenericItem()
{
	GenericItem("", 0);
}

GenericItem::GenericItem(string name, int quantity)
{
	SetName(name);
	SetQuantity(quantity);
}

void GenericItem::SetName(string newName) {
	itemName = newName;
};

string GenericItem::GetName()
{
	return itemName;
}

void GenericItem::SetQuantity(int newQty) {
	itemQuantity = newQty;
};

int GenericItem::GetQuantity()
{
	return itemQuantity;
}

void GenericItem::PrintItem() {
	cout << itemName << " " << itemQuantity << endl;
};
