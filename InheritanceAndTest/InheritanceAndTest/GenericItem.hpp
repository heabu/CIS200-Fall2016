#pragma once

#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
	GenericItem()
	{
		GenericItem("", 0);
	}

	GenericItem(string name, int quantity)
	{
		SetName(name);
		SetQuantity(quantity);
	}

	void SetName(string newName) {
		itemName = newName;
	};

	string GetName()
	{
		return itemName;
	}

	void SetQuantity(int newQty) {
		itemQuantity = newQty;
	};

	int GetQuantity()
	{
		return itemQuantity;
	}

	void PrintItem() {
		cout << itemName << " " << itemQuantity << endl;
	};


protected:
	string itemName;
	int itemQuantity;
};
