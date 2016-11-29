#pragma once
#include <stdexcept>	
#include <string>
#include <math.h>
using namespace std;

class DivideByZeroException : public invalid_argument
{
public:
	DivideByZeroException(const string message) : invalid_argument(message)
	{
		// empty
	}
};

class SquareRootOfANegative : public invalid_argument
{
public:
	SquareRootOfANegative(const string message) : invalid_argument(message)
	{
		// empty
	}
};

class SingleRoot : public domain_error
{
public:
	SingleRoot(const string message) : domain_error(message)
	{
		// empty
	}
};

void quadEquation(double a, double b, double c, double & r1, double & r2)
{
	if (a == 0)
	{
		throw DivideByZeroException("a may not be 0");
	}

	if (b * b - (4 * a * c) < 0)
	{
		throw SquareRootOfANegative("b^2 - 4ac may not be negative");
	}

	r1 = (-b + sqrt((b*b - (4 * a * c)))) / (2 * a);
	r2 = (-b - sqrt((b*b - (4 * a * c)))) / (2 * a);

	if (r1 == r2)
	{
		throw SingleRoot(to_string(r1));
	}
}