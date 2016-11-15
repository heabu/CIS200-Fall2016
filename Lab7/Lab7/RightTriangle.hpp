#include "Polygon.hpp"
#include <math.h>
#include <stdexcept>
#include <string>

using namespace std;

#pragma once
class RightTriangle :public Polygon 
{
public:
	RightTriangle() : Polygon(3) 
	{
		// empty
	}
	void set(int sideNum, int value) 
	{
		if (sideNum == 2) 
		{
			if (pow(value, 2) != (pow(get(0), 2) + pow(get(1), 2)) )
			{
				throw runtime_error("invalid side length: "
					+ to_string(value) + " is not the square root of "
					+ to_string(get(0)) + "^2 + " + to_string(get(1)) + "^2 - expected: "
					+ to_string(sqrt((pow(get(0), 2) + pow(get(1), 2)))));
			}
			Polygon::set(2, value);
		}
		else
		{
			Polygon::set(sideNum, value);
		}
	}

	double area() 
	{
		int base = get(0);
		int height = get(1);
		return base * height *.5;
	}
};
