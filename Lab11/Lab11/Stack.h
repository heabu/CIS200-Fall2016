#pragma once
#include <queue>
#include <stack>
#include <stdexcept>
#include <math.h>

using namespace std;

template<typename T>
class Stack
{
public:
	Stack()
	{
		itemCount = 0;
	}
	bool empty()
	{
		return itemCount == 0;
	}
	void push(T item)
	{
		items.push(item);
		itemCount++;
	}
	void pop()
	{
		while (!items.empty())
		{
			T front = items.front();
			items.pop();
			if (!items.empty())
			{
				aux.push(front);
			}
		}
		while (!aux.empty())
		{
			items.push(aux.front());
			aux.pop();
		}
		itemCount--;
	}
	T top()
	{
		T front;
		while (!items.empty())
		{
			front = items.front();
			items.pop();
			aux.push(front);
		}
		while (!aux.empty())
		{
			items.push(aux.front());
			aux.pop();
		}
		return front;
	}
	int size()
	{
		return itemCount;
	}
private:
	queue<T> items;
	queue<T> aux;
	int itemCount;
};

class BinaryQueue
{
public:
	BinaryQueue(int value)
	{
		if (value < 0)
		{
			throw runtime_error("value must be greater than 0");
		}
		
		int exponent = 0;

		while (pow(2, exponent) < value)
		{
			exponent++;
		}
		
		while (exponent > 0)
		{
			exponent--;
			binary.push(value / int(pow(2, exponent)) == 1);
			value %= int(pow(2, exponent));
		}
	}
	string toString()
	{
		string result = "";
		while (!binary.empty())
		{
			if (binary.front())
			{
				result += "1";
			}
			else
			{
				result += "0";
			}
			binary.pop();
		}
		return result;
	}
private:
	queue<bool> binary;
};

class BinaryStack
{
public:
	BinaryStack(int value)
	{
		if (value < 0)
		{
			throw runtime_error("value must be greater than 0");
		}

		while (value >= 1)
		{
			binary.push(value % 2 != 0);
			value /= 2;
		}
	}
	string toString()
	{
		string result = "";
		while (!binary.empty())
		{
			if (binary.top())
			{
				result += "1";
			}
			else
			{
				result += "0";
			}
			binary.pop();
		}
		return result;
	}
private:
	stack<bool> binary;
};