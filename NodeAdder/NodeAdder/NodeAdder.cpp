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
	Node *currentNode = head;
	currentNode->e = 0;
	currentNode->c = 0;
	currentNode->next = nullptr;

	if (left != nullptr)
	{
		currentNode->c = left->c;
		currentNode->e = left->e;
		currentNode->next = nullptr;
		// BAD!!! NOT A DEEP COPY sum->next = left->next;
	
		while (left->next != nullptr)
		{
			currentNode->next = new Node;
			currentNode->next->c = left->next->c;
			currentNode->next->e = left->next->e;
			currentNode->next->next = nullptr;
			left = left->next;
			currentNode = currentNode->next;
		}
	}

	if (right != nullptr)
	{
		currentNode->next = new Node;
		currentNode->next->c = right->c;
		currentNode->next->e = right->e;
		currentNode->next->next = nullptr;
		currentNode = currentNode->next;

		while (right->next != nullptr)
		{
			currentNode->next = new Node;
			currentNode->next->c = right->next->c;
			currentNode->next->e = right->next->e;
			currentNode->next->next = nullptr;
			right = right->next;
			currentNode = currentNode->next;
		}

	}

	return *head;
}

int main()
{
	Node *first = new Node;
	first->e = 1;
	first->c = 2;

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