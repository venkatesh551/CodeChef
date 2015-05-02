#include <stdio.h>

#define MAX_SIZE 1000009
static int n, A[MAX_SIZE], map[MAX_SIZE];

int min(int x, int y)
{
	return x < y ? x : y;
}

void find_count()
{
	int i, j;
	
	for (i = 0; i < n-1; ++i)
	{
		for (j = 0; j < n-i-1; j++)
		{
			A[j] = min(A[j], A[j+1]);
			map[A[j]]++;
		}
	}
}

int main(void)
{
	int i, Q;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
		map[A[i]]++;
	}
	find_count();
	scanf("%d", &Q);
	while (Q--)
	{
		int k;
		
		scanf("%d", &k);
		printf("%d\n", map[k]);
	}
	return 0;
}
