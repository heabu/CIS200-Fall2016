#include <iostream>
#include "Circle.hpp"

using namespace std;

int main()
{

	Circle *first = new Circle(7.0);
	Circle *second = new Circle(9.0);

	Circle third = first->operator+(*second);
	// same as third = *first + *second;

	Circle fourth = *second * third;

	cout << *first << endl;
	cout << *second << endl;
	cout << third << endl;
	cout << fourth << endl;
	system("pause");
}