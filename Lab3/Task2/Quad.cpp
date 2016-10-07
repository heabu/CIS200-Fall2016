#include <iostream>
#include <assert.h>

using namespace std;

double quad(double a, double b, double c);

double squareRoot(double x);

double squareRoot(double x)
{
	if (x == 1)
	{
		return 1;
	}
	else if (x == 0)
	{
		return 0;
	}
	else if (x <= 0)
	{
		x *= -1;
	}

	double xn = x / 2;
	double xn1 = (xn + x / xn) / 2;

	cout << "X: " << x << endl;
	cout << "Xn: " << xn << endl;
	cout << "Xn1: " << xn1 << endl;

	while (xn - xn1 > .0001 || xn1 - xn > .0001)
	{
		xn = xn1;
		xn1 = (xn + x / xn) / 2;
		cout << "Xn: " << xn << endl;
		cout << "Xn1: " << xn1 << endl;
	}
	double xnsquared = xn1 * xn1;
	double difference = xnsquared - x;
	if (difference < 0)
	{
		difference *= -1;
	}
	assert(difference < .0001);
	return xn1;
}

int main()
{
	cout << "largest root of 2, 2, 0: " << quad(2, 2, 0) << endl;
	system("pause");
	return 0;
}

double quad(double a, double b, double c)
{
	// a is non-zero,  b*b - 4*a*c is non-negative.
	assert(a != 0);
	assert(b*b - 4 * a*c >= 0);

	double x1 = (b * -1 + squareRoot(b * b - ( 4 * a * c ))) / (2 * a);
	double x2 = (b * -1 - squareRoot(b * b - (4 * a * c))) / (2 * a);

	if (x1 > x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}