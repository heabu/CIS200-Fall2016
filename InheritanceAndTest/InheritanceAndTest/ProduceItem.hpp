#include "GenericItem.hpp"
#include <iostream>

#pragma once

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
	ProduceItem(string name, int quantity, string expirationDate) : GenericItem(name, quantity)
	{
		SetExpiration(expirationDate);
	}

	void SetExpiration(string newDate) {
		expirationDate = newDate;
	};

	string GetExpiration() {
		return expirationDate;
	};

	void PrintItem() {
		cout << itemName << " " << itemQuantity
			<< " (Expires: " << expirationDate << ")"
			<< endl;
	};

private:
	string expirationDate;
};