
#include <iostream>
#include <string>
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{
	Circle circle1;
	circle1.setRadius(7);
	cout << circle1.getRadius() << endl;
	cout << circle1.area() << endl;
	cout << circle1.circumference() << endl;

	Circle circle2;
	circle2.setRadius(50);
	cout << circle2.getRadius() << endl;
	cout << circle2.area() << endl;
	cout << circle2.circumference() << endl;

	Cylinder cylinder1;
	cylinder1.setRadius(50);
	cylinder1.setHeight(10);
	cout << "Radius: " << cylinder1.getRadius() << endl;
	cout << "Area: " << cylinder1.area() << endl;
	cout << "Circumference: " << cylinder1.circumference() << endl;
	cout << "Volume: " << cylinder1.getVolume() << endl;

	string input;
	cin >> input;

}