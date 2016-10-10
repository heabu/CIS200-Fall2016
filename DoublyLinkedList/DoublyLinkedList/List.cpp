#include "List.h"

List::List()
{
	head = new IntNode();
	head->next = head;
	head->previous = head;
}

List::~List()
{
	delete head;
}

void List::Append(int value)
{
	IntNode* nodeToAdd = new IntNode(value);
	// sets new end node to loop back to head
	nodeToAdd->next = head;
	// sets new node previous to be the previous end node
	nodeToAdd->previous = head->previous;

	// sets old end node to point to new ending node
	head->previous->next = nodeToAdd;

	// sets new node as the end of the list going backwards
	head->previous = nodeToAdd;

}

// This is bad if you ask for an index beyond what nodes you have
int List::At(int index)
{
	IntNode* currentNode = head;
	for (int currentIndex = 0; currentIndex <= index; currentIndex++)
	{
		currentNode = currentNode->next;
	}
	return currentNode->value;
}

// This is bad if you ask for an index beyond what nodes you have
void List::RemoveByIndex(int index)
{
	IntNode* currentNode = head;
	for (int currentIndex = 0; currentIndex <= index; currentIndex++)
	{
		currentNode = currentNode->next;
	}
	RemoveNode(currentNode);
}


bool List::RemoveByValue(int value)
{
	IntNode* currentNode = head;
	while (currentNode->next != head)
	{
		currentNode = currentNode->next;
		if (currentNode->value == value)
		{
			RemoveNode(currentNode);
			return true;
		}
	}
	return false;
}

// This is bad if you ask for an index beyond what nodes you have
void List::Set(int index, int value)
{
	IntNode* currentNode = head;
	for (int currentIndex = 0; currentIndex <= index; currentIndex++)
	{
		currentNode = currentNode->next;
	}
	currentNode->value = value;
}

void List::RemoveNode(IntNode * nodeToDelete)
{
	// take self out of the list by making previous jump over
	nodeToDelete->previous->next = nodeToDelete->next;

	// take self out of backwards list by making next jump over
	nodeToDelete->next->previous = nodeToDelete->previous;
	delete nodeToDelete;
}
