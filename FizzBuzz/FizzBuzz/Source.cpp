#include <iostream>
#include <string>

using namespace std;

// Recursive function
int OddFactorial(int number);
int OddFactorialNonRecursive(int number);
int AnotherSillyRecursiveFunction(int number, int& numberOfTimesCalled);
void PrintStringBackwards(string &toReverse);

int main()
{
	for (int number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			cout << "FIZZBUZZ";
		}
		else if (number % 3 == 0)
		{
			cout << "FIZZ";
		}
		else if ( number % 5 == 0 )
		{
			cout << "BUZZ";
		}
		else
		{
			cout << number;
		}
		if (number != 100)
		{
			cout << ", ";
		}
	}
	cout << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	cout << "Testing OddFactorialNonRecursive(2), expected value: 2 - actual value: " << OddFactorialNonRecursive(2) << endl;
	cout << "Testing OddFactorialNonRecursive(4), expected value: 12 - actual value: " << OddFactorialNonRecursive(4) << endl;
	cout << "Testing OddFactorialNonRecursive(9), expected value: 945 - actual value: " << OddFactorialNonRecursive(9) << endl;
	cout << "Testing OddFactorialNonRecursive(12), expected value: 124740 - actual value: " << OddFactorialNonRecursive(12) << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	string test = "not a palindrome";
	cout << "test is: " << test << endl;
	cout << "Testing PrintStringBackwards('not a palindrome'), expected output: emordnilap a ton - actual output: ";
	PrintStringBackwards(test);
	cout << test << endl;
	cout << "test now is: " << test << endl;
	system("pause");
}

int OddFactorial(int number)
{
	// base case
	if (number == 1)
	{
		return 1;
	}
	// bad input ( not really a base case )
	if (number < 1)
	{
		return 0;
	}
	// complex case - number is odd
	if (number % 2 != 0)
	{
		return number * OddFactorial(number - 2);
	}
	// complex case - number is even
	else
	{
		return number * OddFactorial(number - 1);
	}
}

int OddFactorialNonRecursive(int number)
{
	// base case
	if (number == 1)
	{
		return 1;
	}
	// bad input ( not really a base case )
	if (number < 1)
	{
		return 0;
	}
	int result = number;
	while (number > 1)
	{
		if (number % 2 == 0)
		{
			result = result * (number - 1);
			number--;
		}
		else
		{
			result = result * (number - 2);
			number -= 2;
		}
	}
	return result;
}


int SomeSillyFunction(int number)
{
	if (number > 10)
	{
		return 100 * number;
	}
	else if (number % 3 == 0)
	{
		return SomeSillyFunction(number + 5);
	}
	else
	{
		return SomeSillyFunction(number + 1);
	}
}

int AnotherSillyRecursiveFunction(int number, int & numberOfTimesCalled)
{
	numberOfTimesCalled++;
	if (number > 10)
	{
		return AnotherSillyRecursiveFunction( number / 10, numberOfTimesCalled);
	}
	else if (number % 3 == 0)
	{
		return AnotherSillyRecursiveFunction( number / 2, numberOfTimesCalled);
	}
	else
	{
		return AnotherSillyRecursiveFunction(number + 11, numberOfTimesCalled);
	}
}

void PrintStringBackwards(string &toReverse)
{
	for (int index = 0; index < toReverse.length() / 2; index++)
	{
		char leftSide = toReverse[index];
		toReverse[index] = toReverse.at(toReverse.length() - 1 - index);
		toReverse.at(toReverse.length() - 1 - index) = leftSide;
	}
}

void print2DArray(int myArray[3][3])
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myArray[row][col];
		}
		cout << endl;
	}
}