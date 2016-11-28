#pragma once

template <typename T>
struct Node {
	T value;
	Node *next;
};

template <typename T>
class MyStack
{
public:
	MyStack<T>()
	{
		top = nullptr;
	}

	void Push(T t)
	{
		count++;
		if (top == nullptr)
		{
			top = new Node<T>();
			top->value = t;
			top->next = nullptr;
		}
		else
		{
			Node<T> *newTop = new Node<T>();
			newTop->value = t;
			newTop->next = top;
			top = newTop;
		}
	}

	T Pop()
	{
		if (top != nullptr)
		{
			count--;
			T value = top->value;
			top = top->next;
			return value;
		}
		else
		{
			return *(new T);
		}
	}

	T Peek()
	{
		return *top.value;
	}

	bool IsEmpty()
	{
		return count == 0;
	}

	int size()
	{
		return count;
	}
private:
	Node<T> *top;
	int count;
};