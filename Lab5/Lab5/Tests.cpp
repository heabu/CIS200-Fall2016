#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
	Vector test(10);
	Vector *vecPtr;
	Vector exam(5);
	for (int i = 0; i < test.length(); i++) {
		test[i] = i;
	}
	cout << "test initally is : ";
	for (int i = 0; i < test.length(); i++) {
		cout << test[i] << " ";
	}
	cout << endl;

	cout << "empty Vector of length 5 is : ";
	for (int i = 0; i < exam.length(); i++)
		cout << exam[i] << " ";
	cout << endl;
	exam = test;
	cout << "after exam = test, exam  is : ";
	for (int i = 0; i < exam.length(); i++)
		cout << exam[i] << " ";
	cout << endl;
	{
		Vector sqrs(10);
		cout << "The squares are : ";
		for (int i = 0; i < sqrs.length(); i++)
			sqrs[i] = i*i;
		vecPtr = &sqrs;
		for (int i = 0; i < sqrs.length(); i++)
			cout << i*i << " ";
		cout << endl;
	}
	cout << "trying to print an empty vector: ";
	for (int i = 0; i < vecPtr->length(); i++)
		cout << (*vecPtr)[i] << " ";
	cout << endl;
	for (int i = 0; i < test.length(); i++)
		test[i] = 10 - i;
	cout << "testing deep copy :\n";
	cout << "test is now : ";
	for (int i = 0; i < test.length(); i++)
		cout << test[i] << " ";
	cout << endl;
	cout << "exam is now : ";
	for (int i = 0; i < exam.length(); i++)
		cout << exam[i] << " ";
	cout << endl;

	cout << exam[-1] << endl;

	system("pause");
	return 0;
}
