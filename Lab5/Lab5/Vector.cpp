#include "Vector.h"

Vector::Vector(int s)
{
	size = s;
	entries = new int[size];
	for (int index = 0; index < size; index++)
	{
		entries[index] = 0;
	}
}

Vector::Vector(const Vector & rhs)
{
	deepCopy(rhs);
}

Vector Vector::operator=(const Vector & rhs)
{
	delete[] entries;
	deepCopy(rhs);
	return *this;
}

Vector::~Vector()
{
	delete[] entries;
	size = 0;
}

int & Vector::operator[](int index)
{
	return entries[index];
}

int Vector::length()
{
	return size;
}

void Vector::deepCopy(const Vector & rhs)
{
	size = rhs.size;
	entries = new int[size];
	for (int index = 0; index < size; index++)
	{
		entries[index] = rhs.entries[index];
	}
}
