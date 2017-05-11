#include "CommonHeader.h"


#ifdef P1_01_Union_Find
READ_INPUT(P1_01_Union_Find)

#include <iostream>
#include <stdio.h>

using namespace std;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)

class UnionFind
{
public:
	UnionFind(int n)
	{
		id = new int[n+1];  // as any operation will be start with index 1.
		sz = new int[n + 1];
		FORI(i, 1, n)
		{
			id[i] = i;
			sz[i] = 1;
		}
	}

	void Union(int p, int q)
	{
		int rP = root(p);
		int rQ = root(q);
		if (rP == rQ)
			return;
		// balance subtrees, by always making smaller subtree child of bigger.
		if (sz[rP] < sz[rQ])		
		{
			id[rP] = rQ;
			sz[rQ] += sz[rP];
		}
		else
		{
			id[rQ] = rP;
			sz[rP] += sz[rQ];
		}
	}

	bool Connected(int p, int q)
	{
		return root(p) == root(q);
	}

	~UnionFind()
	{
		delete[] id;
		delete[] sz;
	}
private:
	int root(int i)
	{
		while (i != id[i]) i = id[i];
		return i;
	}
private:
	int *id;
	int *sz;

};

int main()
{
	cout << red<<"ashish" << endl;
	UnionFind *uf = new UnionFind(10);
	return 0;
}
#endif
