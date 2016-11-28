#include "MyStack.h"
#include <iostream>

#include <stack>
#include <queue>

using namespace std;

int main()
{
	stack<int> realStack;
	for (int number = 0; number < 10; number++)
	{
		realStack.push(number);
	}
	while (realStack.size() != 0)
	{
		cout << realStack.top() << endl;
		realStack.pop();
	}

	queue<int> realQueue;
	for (int number = 0; number < 10; number++)
	{
		realQueue.push(number);
	}
	while (realQueue.size() != 0)
	{
		cout << realQueue.front() << endl;
		realQueue.pop();
	}


	system("pause");
	return 0;
}