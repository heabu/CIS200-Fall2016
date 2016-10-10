#include "IntNode.h"
#pragma once
class List
{
public:
	List();
	~List();
	void Append(int value);
	int At(int index);
	void RemoveByIndex(int index);
	bool RemoveByValue(int value);
	void Set(int index, int value);

private:
	void RemoveNode(IntNode* nodeToDelete);
	IntNode* head;
};