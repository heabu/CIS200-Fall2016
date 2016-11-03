#pragma once
class Circle {
public:
	Circle( double r);
	double circumference();
	virtual double area();
	void setRadius(double radius);
	double getRadius();
	virtual double getVolume();
	const double PI = 3.14159;

private:
	double radius;
	
};