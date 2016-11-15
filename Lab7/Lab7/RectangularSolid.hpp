#include "Rectangle.hpp"
#include <stdexcept>

using namespace std;

#pragma once
class RectangularSolid :public Rectangle {
	int height;

public:
	RectangularSolid(int height = 0)
	{
		setHeight(height);
	}

	double area()
	{
		return Rectangle::area() * 2 + get(0) * height * 2 + get(1) * height * 2;
	}

	double volume()
	{
		return Rectangle::area() * height;
	}

	int getHeight()
	{
		return height;
	}

	void setHeight(int height)
	{
		if (height < 0)
		{
			throw runtime_error("height may not be negative");
		}

		this->height = height;
	}
};
