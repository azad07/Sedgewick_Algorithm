#include "CommonHeader.h"


#ifdef P1_05_queue_using_linkedlist
READ_INPUT(P1_05_queue_using_linkedlist)

#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)

class Queue
{
public:
	Queue()
	{
		first = last = NULL;
	}

	void Enqueue(int v)
	{
		Node *oldLast = last;
		last = new Node();
		last->value = v;
		last->next = NULL;
		if (IsEmpty())	first = last;
		else			oldLast->next = last;
	}
	int Dequeue()
	{
		Node *oldFirst = first;
		int ret = oldFirst->value;
		first = first->next;
		if (IsEmpty()) last = NULL;
		delete oldFirst;
		return ret;
	}
	bool IsEmpty()
	{
		return first == NULL;
	}
private:
	struct Node
	{
		int value;
		Node *next;
	};
	Node *first, *last;
};

int main()
{
	Queue myQueue;
	FORI(i, 1, 100)
		myQueue.Enqueue(i);
	while (!myQueue.IsEmpty())
		cout << myQueue.Dequeue() << " ";

	return 0;
}
#endif
