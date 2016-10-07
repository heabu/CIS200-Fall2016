#pragma once
struct IntNode {
	int value;
	IntNode* previous;
	IntNode* next;

	IntNode(int value = 0, IntNode* previous = nullptr, IntNode* next = nullptr);

	void AddAfter(IntNode* current);
};