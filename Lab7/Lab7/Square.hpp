#include "Rectangle.hpp"
#include <stdexcept>

#pragma once
class Square : public Rectangle 
{
public:
	Square() 
	{
		// empty - calls Rectangle()
	}
	void set(int sideNum, int value) 
	{
		if (sideNum >= 4)
		{
			throw runtime_error("A square does not have more than 4 sides.");
		}
		Rectangle::set(0, value);
		Rectangle::set(1, value);
	}
};
