#pragma once

struct Date
{
	int day;
	int month;
	int year;
};


template <typename T>
T maxfunc(T values[], int size)
{
	T max = values[0];

	for (int index = 1; index < size; index++)
	{
		if (max < values[index])
		{
			max = values[index];
		}
	}

	return max;
}
