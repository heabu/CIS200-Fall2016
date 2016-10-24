#include "Circle.hpp"
#include <cmath>

Circle::Circle(double radius)
{
	if (radius > 0)
	{
		this->radius = radius;
	}
	else
	{
		this->radius = 0;
	}
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return radius * radius * PI;
}

double Circle::getCircumference() const
{
	return 2 * radius * PI;
}

Circle Circle::operator+(const Circle rightHandSide) const
{
	double newCircleArea = this->getArea() + rightHandSide.getArea();
	double newRadius = sqrt(newCircleArea / PI);
	return Circle(newRadius);
}

Circle Circle::operator*(const Circle rightHandSide) const
{
	double newCircleArea = this->getArea() * rightHandSide.getArea();
	double newRadius = sqrt(newCircleArea / PI);
	return Circle(newRadius);
}

ostream & operator<<(ostream & out, const Circle & rightHandSide)
{
	out << "Radius: " << rightHandSide.getRadius();
	return out;
}
