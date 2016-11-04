#include "Rectangle.hpp"

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
		Rectangle::set(0, value);
		Rectangle::set(1, value);
	}
};
