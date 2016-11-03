#include "Cylinder.h"

Cylinder::Cylinder(double rad) : Circle(rad)
{

}

double Cylinder::getVolume()
{
	return Circle::area() * height;
}

double Cylinder::area()
{
	return 2 * Circle::area() + 2 * PI * getRadius() * height;
}

int Cylinder::getHeight()
{
	return height;
}

void Cylinder::setHeight(int height)
{
	if (height > 0)
	{
		this->height = height;
	}
	else
	{
		this->height = 0;
	}
}
