#include "CommonHeader.h"


#ifdef P1_03_Stack_using_Array
READ_INPUT(P1_03_Stack_using_Array)

#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)

class Stack
{
public:
	Stack(int capacity)
	{
		arr = new int[capacity];
		N = 0;
	}
	void Push(int v)
	{
		arr[N++] = v;
	}
	int Pop()
	{
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
	int *arr;
	int N;
};

int main()
{
	cout << red<<"ashish" << endl;
	Stack myStack(1000);
	FORI(i, 1, 100)
		myStack.Push(i);
	while (!myStack.IsEmpty())
		cout << myStack.Pop() << endl;

	return 0;
}
#endif
