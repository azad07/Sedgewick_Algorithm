#include "CommonHeader.h"


#ifdef P1_06_queue_using_array
READ_INPUT(P1_06_queue_using_array)

#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)

class Queue
{
public:
	Queue(int c)
	{
		arr = new int[c];
		capacity = c;
		first = last = 0;
	}

	void Enqueue(int v)
	{
		
	}
	int Dequeue()
	{
		
	}
	bool IsEmpty()
	{
		
	}
private:
	int first;
	int last;
	int *arr;
	int capacity;
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
