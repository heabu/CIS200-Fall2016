#pragma once
class Polygon {
	int numOfSides;
	int *sides;
public:
	Polygon(int numSides = 0) 
	{
		if (numSides >= 0)
		{
			numOfSides = numSides;
		}
		sides = new int[numOfSides];
	}

	~Polygon()
	{
		delete[] sides;
	}

	void virtual set(int sideNum, int value) 
	{
		if (sideNum >= 0 && sideNum < numOfSides)
		{
			if (value > 0)
			{
				sides[sideNum] = value;
			}
		}
	}

	int get(int sideNum) 
	{ 
		if (sideNum >= 0 && sideNum < numOfSides)
		{
			return sides[sideNum];
		}
		return 0;
	}
	
	int virtual perimeter() 
	{
		int total = 0;
		for (int index = 0; index < numOfSides; index++)
			total += sides[index];
		return total;
	}

	double virtual area() 
	{
		return 0;
	}

	double virtual volume()
	{ 
		return 0;
	}
};
