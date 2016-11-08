#include <iostream>
#include "Lab8.h"
#include "A.h"
#include "B.h"
using namespace std;



int main()
{
	const int size = 5;
	int ints[size];
	ints[0] = 4;
	ints[1] = 1;
	ints[2] = 13;
	ints[3] = 3;
	ints[4] = 2;
	cout << maxfunc(ints, size) << endl;

	double doubles[size];
	doubles[0] = 1.1;
	doubles[1] = 4.1;
	doubles[2] = 8.1;
	doubles[3] = 5.2;
	doubles[4] = 2.3;
	cout << maxfunc(doubles, size) << endl;

	string strings[size];
	strings[0] = "student";
	strings[1] = "is";
	strings[2] = "in";
	strings[3] = "the";
	strings[4] = "class";
	string max = maxfunc(strings, size);

	B<int> b;
	b.setValueb(10);

	cout << b.getValueb();

	system("pause");
	return 0;
}