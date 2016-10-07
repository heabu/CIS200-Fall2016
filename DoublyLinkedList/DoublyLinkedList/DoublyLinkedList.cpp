#include "IntNode.h"
#include <iostream>

using namespace std;

void print(IntNode* head)
{
	IntNode* current = head->next;
	while (current != head)
	{
		cout << current->value << endl;
		current = current->next;
	}
}

void printBackwards(IntNode* head)
{
	IntNode* current = head->previous;
	while (current != head)
	{
		cout << current->value << endl;
		current = current->previous;
	}
}

int main()
{
	IntNode* head = new IntNode(0);
	head->previous = head;
	head->next = head;

	for (int numberOfNodesToAdd = 1; numberOfNodesToAdd < 100; numberOfNodesToAdd++)
	{
		head->previous->AddAfter(new IntNode(numberOfNodesToAdd));
	}

	print(head);
	printBackwards(head);

	system("pause");
}