#include "CommonHeader.h"


#ifdef P1_02_Stack_using_LinkedList
READ_INPUT(P1_02_Stack_using_LinkedList)

#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)

class Stack
{
public:
	Stack()
	{
		first = NULL;
	}
	void Push(int v)
	{
		Item *oldFirst = first;
		first = new Item();
		first->value = v;
		first->next = oldFirst;
	}
	int Pop()
	{
		int ret = first->value;
		Item *oldFirst = first;
		first = first->next;
		delete oldFirst;
		return ret;
	}
	int Top()
	{
		if (first != NULL)
			return first->value;
		return -1;
	}
	bool IsEmpty()
	{
		return first == NULL;
	}
private:
	struct Item
	{
		int value;
		Item *next;
	};	
private:
	Item *first;
};

int main()
{
	cout << red<<"ashish" << endl;
	Stack myStack;
	FORI(i, 1, 100)
		myStack.Push(i);
	while (!myStack.IsEmpty())
		cout << myStack.Pop() << endl;

	return 0;
}
#endif
