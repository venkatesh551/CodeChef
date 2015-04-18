#include <stdio.h>

long long max (long long a, long long b)
{
	return a > b ? a : b;
}

int main(void)
{
	int i, j, N, M, L, A[501][501];
	int e1 = 0, e2 = 0;
	long long sum1, sum2;
	
	scanf("%d%d", &N, &M);
	for (i = 1; i <= N; ++i)
	{
		for (j = 1; j <= M; ++j)
		{
			scanf("%d", &A[i][j]);
		}	
	}
	scanf("%d", &L);
	sum1 = sum2 = 0;
	while(L--)
	{
		int x, y;
		
		scanf("%d%d", &x, &y);
		if (x > N || y > M)
		{
			e1 = -1;
		}
		else
		{
			sum1 += A[x][y];
		}
		if (x > M || y > N)
		{
			e2 = -1;
		}
		else
		{
			sum2 += A[y][x];
		}
	}
	if (e1 == -1)
	{
		sum1 =  -1;
	} 
	if (e2 == -1)
	{
		sum2 = -1;
	}
	printf("%lld\n", max(sum1, sum2));
	return 0;
}
