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
	shapes[2]->set(0, 3);
	shapes[2]->set(1, 4);
	shapes[2]->set(2, 5);
	shapes[3] = new RectangularSolid(5);
	shapes[3]->set(0, 6);
	shapes[3]->set(1, 3);
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
