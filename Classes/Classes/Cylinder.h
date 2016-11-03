#include "Circle.h"

#pragma once
class Cylinder : public Circle
{
public:
	Cylinder(double r);
	double getVolume();
	double area();
	int getHeight();
	void setHeight(int height);
private:
	int height;
};