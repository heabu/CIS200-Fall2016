#include <iostream>

using namespace std;

struct Node
{
	int e;
	double c;
	Node* next;
};

Node add(Node* left, Node* right)
{
	Node *head = new Node;
	Node *sum = head;
	sum->e = 0;
	sum->c = 0;
	sum->next = nullptr;

	if (left != nullptr)
	{
		sum->c = left->c;
		sum->e = left->e;
		sum->next = nullptr;
		// BAD!!! NOT A DEEP COPY sum->next = left->next;
	
		while (left->next != nullptr)
		{
			sum->next = new Node;
			sum->next->c = left->next->c;
			sum->next->e = left->next->e;
			sum->next->next = nullptr;
			left = left->next;
			sum = sum->next;
		}
	}

	if (right != nullptr)
	{
		sum->next = new Node;
		sum->next->c = right->c;
		sum->next->e = right->e;
		sum->next->next = nullptr;
		sum = sum->next;

		while (right->next != nullptr)
		{
			sum->next = new Node;
			sum->next->c = right->next->c;
			sum->next->e = right->next->e;
			sum->next->next = nullptr;
			right = right->next;
			sum = sum->next;
		}

	}

	return *head;
}

int main()
{
	Node *first = new Node;
	first->e = 1;
	first->c = 2;

	for (int i = 0; i < 10; i++)
	{
		Node *newNode = new Node;
	}

	Node *second = new Node;
	second->e = 3;
	second->c = 4;

	Node *third = new Node;
	third->e = 5;
	third->c = 6;

	Node *fourth = new Node;
	fourth->e = 7;
	fourth->c = 8;

	first->next = second;
	second->next = nullptr;

	third->next = fourth;
	fourth->next = nullptr;

	Node sum = add(first, third);

	system("pause");
	return 0;
}