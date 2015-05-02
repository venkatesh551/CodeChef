#include <stdio.h>

#define MAX_SIZE 1000007
static int A[MAX_SIZE];

int min(int x, int y)
{
	return x < y ? x : y;
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int min_pos(int a, int b, int c)
{
	int r = min(a, b);
	
	if (c > 0)
	{
		return min(r, c);
	}
	else
	{
		return r;
	}
}

int main(void)
{
	int N, K, i, j, ans;
		
	scanf("%d%d", &N, &K);
	for (i = 0; i < N; i++)
	{
		int x;
		
		scanf("%d", &x);		
		A[x] = min_pos(i+1, N-i, A[x]);
	}
	ans  = MAX_SIZE;
	for (i = 1, j = K-1; i < j; i++, j--)
	{
		if (A[i] > 0 && A[j] > 0)
		{
			ans = min(ans, max(A[i], A[j]));
		}
	}
	if (ans == MAX_SIZE)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",ans);
	}
	return 0;
}
