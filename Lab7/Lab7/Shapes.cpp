#include <iostream>

#include "Polygon.hpp"
#include "Rectangle.hpp"
#include "RectangularSolid.hpp"
#include "RightTriangle.hpp"
#include "Square.hpp"

using namespace std;

int main() {
	Polygon * shapes[10];

	shapes[0] = new Rectangle;
	shapes[0]->set(0, 4);
	shapes[0]->set(1, 10);
	shapes[1] = new Square;
	shapes[1]->set(0, 5);
	shapes[2] = new RightTriangle;


	int triangleSide0 = 0;
	int triangleSide1 = 0;
	int triangleSide2 = 0;
	while (triangleSide2 == 0)
	{
		cout << "enter the length of triangle side 0";
		cin >> triangleSide0;

		cout << "enter the length of triangle side 1";
		cin >> triangleSide1;

		cout << "enter the length of triangle side 2";
		cin >> triangleSide2;
		try
		{
			shapes[2]->set(0, triangleSide0);
			shapes[2]->set(1, triangleSide1);
			shapes[2]->set(2, triangleSide2);
		}
		catch (runtime_error& e)
		{
			cout << e.what() << endl;
			triangleSide2 = 0;
		}
	}
	
	RectangularSolid *box = nullptr;
	int height = -1;
	while (box == nullptr)
	{
		try
		{
			box = new RectangularSolid(height);
			box->set(0, 6);
			box->set(1, 3);
			shapes[3] = box;
		}
		catch (runtime_error& e)
		{
			cout << e.what() << endl;
			cout << "Please enter a height for the rectangular solid" << endl;
			cin >> height;
		}
	}

	for (int index = 0; index < 4; index++) {
		cout << "For shape " << index << endl;
		cout << "the area is : " << shapes[index]->area();
		cout << " the perimeter is : " << shapes[index]->perimeter();
		if (index == 3)
			cout << " the volume is : " << shapes[index]->volume();
		cout << endl;
	}

	system("pause");
	return 0;
}
