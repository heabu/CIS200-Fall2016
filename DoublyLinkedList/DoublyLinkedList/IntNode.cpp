#include "IntNode.h"

IntNode::IntNode(int value, IntNode * previous, IntNode * next)
{
	this->value = value;
	this->previous = previous;
	this->next = next;
}

void IntNode::AddAfter(IntNode * nodeToAdd)
{
	this->next->previous = nodeToAdd;
	
	IntNode* next = this->next;
	
	this->next = nodeToAdd;
	nodeToAdd->next = next;
	nodeToAdd->previous = this;
}
