#include <iostream>

using namespace std;

#pragma once
class Circle
{
private:
	double radius;

public:
	Circle(double radius);
	double getRadius() const;
	double getArea() const;
	double getCircumference() const;
	Circle operator+(const Circle rightHandSide) const;
	Circle operator*(const Circle rightHandSide) const;
	const double PI = 3.14159;

	friend ostream&   operator<< (ostream & out, const Circle &rightHandSide);
};