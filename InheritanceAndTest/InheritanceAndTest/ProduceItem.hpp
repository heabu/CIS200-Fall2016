#include "GenericItem.hpp"
#include <iostream>

#pragma once

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
	ProduceItem(string name, int quantity, string expirationDate);
	
	void SetExpiration(string newDate);

	string GetExpiration();

	void PrintItem();

private:
	string expirationDate;
};