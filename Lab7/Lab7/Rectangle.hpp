#include "Polygon.hpp"

#pragma once
class Rectangle : public Polygon
{
public:
	Rectangle() :Polygon(4)
	{
		// empty
	}

	double area()
	{
		return (get(0) * get(1));
	}

	void set(int sideNum, int value)
	{
		if (sideNum == 0 || sideNum == 2)
		{
			Polygon::set(0, value);
			Polygon::set(2, value);
		}
		else
		{
			Polygon::set(1, value);
			Polygon::set(3, value);
		}
	}
};
