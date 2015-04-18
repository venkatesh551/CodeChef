#include <cstdio>
#include <iostream>

using namespace std;
#define MAX_SIZE 1000000
static long long M[10*MAX_SIZE];
static int  A[MAX_SIZE];

void construct_SegTree(int s, int e, int x)
{
	if (s ==  e)
	{
		M[x] = A[s];
	}
	else
	{
		int left = 2 * x + 1;
		int right = left + 1;
		int temp = (s + e)/2;
		
		construct_SegTree(s, temp, left);
		construct_SegTree(temp+1, e, right);
		M[x] = M[left] + M[right];
	}
}

void update(int s, int e, int x, int pos, int v)
{
	int left = 2 * x + 1;
	int right = left + 1;
	int temp = (s + e)/2;
	if (pos >= s && pos <= e)
	{
		M[x] += v;
	}
	if ( s > pos || e < pos || s == e)
	{
		return;
	}
	update(s, temp, left, pos, v);
	update(temp+1, e, right, pos, v);
}

long long query(int s, int e, int x, int i, int j)
{
	int left = 2 * x + 1;
	int right = left + 1;
	int temp = (s + e)/2;
	long long p1, p2;
	
	if (i > e || j < s)
	{
		return 0;
	}
	if (s >= i && e <= j)
	{
		return M[x];
	}
	p1 = query(s, temp, left, i, j);
	p2 = query(temp+1, e, right, i, j);
	return p1 + p2;	
}


int main(void)
{
	int N, Q, i;
	
	cin >> N >> Q;
	for (i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	construct_SegTree(0, N-1, 0);
	while(Q--)
	{
		char c;
		int pos, val;
		
		cin >> c >> pos >> val;
		if (c == 'S')
		{
			cout << query(0, N-1, 0, pos, val) << endl;
		}
		else if (c == 'G')
		{
			update(0, N-1, 0, pos, val);
		}
		else
		{
			update(0, N-1, 0, pos, -val);
		}
	}
	return 0;
}
