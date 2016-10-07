#include <iostream>
using namespace std;

struct ListRec
{
	char value;
	ListRec* next;
};

void deepCopy(ListRec* oldListHead, ListRec* newListHead)
{
	if (newListHead == nullptr)
	{
		newListHead = new ListRec;
	}
	if (oldListHead != nullptr)
	{
		newListHead->value = oldListHead->value;
		newListHead->next = nullptr;

		ListRec* currentNewPointer = newListHead;
		ListRec* currentOldPointer = oldListHead->next;

		while (currentOldPointer != nullptr)
		{
			ListRec* copy = new ListRec; // Creates new object for deep copy
			copy->value = currentOldPointer->value; // Copys value over from old list
			copy->next = nullptr; // DO NOT COPY NEXT, otherwise we don't have a deep copy
			currentNewPointer->next = copy;  // Set's the current newPointerList next to the copy
			
			currentNewPointer = currentNewPointer->next; // moves next in the new list
			currentOldPointer = currentOldPointer->next; // moves next in the old list
		}
	}
	else
	{
		newListHead = oldListHead;
	}
}


void print(ListRec* listHead)
{
	ListRec* current = listHead;
	while (current != nullptr)
	{
		cout << current->value << endl;
		current = current->next;
	}
}

int main()
{
	ListRec* head = new ListRec;
	head->value = 'A';

	ListRec* cPointer = new ListRec;
	cPointer->value = 'C';

	ListRec* mPointerHasALongName = new ListRec;
	mPointerHasALongName->value = 'M';
	
	head->next = cPointer;
	cPointer->next = mPointerHasALongName;
	mPointerHasALongName->next = nullptr;
	
	ListRec* newHead = new ListRec;

	deepCopy(head, newHead);

	head->value = 'Z';
	cout << "Printing head:" << endl;
	print(head);
	cout << endl;
	cout << "Printing newHead:" << endl;
	print(newHead);

	system("pause");
	return 0;
}

