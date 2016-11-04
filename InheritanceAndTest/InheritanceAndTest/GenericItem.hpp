#pragma once

#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
	GenericItem();
	GenericItem(string name, int quantity);
	void SetName(string newName);
	string GetName();
	void SetQuantity(int newQty);
	int GetQuantity();
	virtual void PrintItem();

protected:
	string itemName;
	int itemQuantity;
};
