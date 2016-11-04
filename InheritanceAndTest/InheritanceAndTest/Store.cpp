#include "GenericItem.hpp"
#include "ProduceItem.hpp"

int main()
{
	const int inventorySize = 3;
	GenericItem * inventory[inventorySize];
	inventory[0] = new ProduceItem("Apple", 50, "11/10/2016");
	inventory[1] = new GenericItem("Broom", 10);
	inventory[2] = new ProduceItem("Carrots", 100, "11/15/2016");

	for (int index = 0; index < inventorySize; index++)
	{
		inventory[index]->PrintItem();
	}
	system("pause");
}