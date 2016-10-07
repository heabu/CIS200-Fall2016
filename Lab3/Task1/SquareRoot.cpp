#include <iostream>
#include <assert.h>

using namespace std;

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

	while (xn - xn1 > .0001 || xn1 - xn > .0001 )
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
	assert(difference < .0001 );
	return xn1;
}

int main()
{
	for (double i = 1; i <= 25; i++)
	{
		double sqRoot = squareRoot(i);
		cout << "Square Root of " << i << ": " << sqRoot << " - squared is: " << sqRoot * sqRoot << endl << endl;
	}
	system("pause");
	return 0;
}