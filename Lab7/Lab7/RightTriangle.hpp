#include "Polygon.hpp"

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
			if (get(0) < value && get(1) < value)
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
