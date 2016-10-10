#include "IntNode.h"
#include "List.h"
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
	/*IntNode* head = new IntNode(0);
	head->previous = head;
	head->next = head;

	for (int numberOfNodesToAdd = 1; numberOfNodesToAdd < 100; numberOfNodesToAdd++)
	{
		head->previous->AddAfter(new IntNode(numberOfNodesToAdd));
	}

	print(head);
	printBackwards(head);

	*/

	List myList;

	myList.Append(1);
	myList.Append(2);

	cout << myList.At(0) << endl;
	cout << myList.At(1) << endl;
	//cout << myList.At(10) << endl;

	myList.Set(1, 20);

	cout << myList.At(0) << endl;
	cout << myList.At(1) << endl;

	myList.RemoveByValue(20);

	cout << myList.At(0) << endl;
	cout << myList.At(1) << endl;

	system("pause");

	return 0;
}