#include "CommonHeader.h"


#ifdef P1_04_Stack_using_resizing_array
READ_INPUT(P1_04_Stack_using_resizing_array)

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
		capacity = 1;
		arr = new int[capacity];
		N = 0;
	}
	void Push(int v)
	{
		if (N == capacity)
			resize(2 * capacity);
		arr[N++] = v;
	}
	int Pop()
	{
		if (N <= capacity / 4)
			resize(capacity / 4);
		return arr[--N];
	}
	int Top()
	{
		return arr[N - 1];
	}
	bool IsEmpty()
	{
		return N == 0;
	}
private:
	void resize(int n)
	{
		int *copy = new int[n];
		FORI(i, 0, N - 1)
			copy[i] = arr[i];
		arr = copy;
		capacity = n;
	}
private:
	int *arr;
	int N;
	int capacity;
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
