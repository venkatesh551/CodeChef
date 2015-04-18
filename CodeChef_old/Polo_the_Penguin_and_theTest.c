#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int knapsack(int *wt, int *val, int n, int W)
{
	int i, j;
	int m[101][101];
	
	memset(m, 0, sizeof(m));
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= W; j++)
		{
			if (wt[i] > j)
				m[i][j] = m[i-1][j];
			else
				m[i][j] = max(m[i-1][j], val[i] + m[i-1][j-wt[i]]);
		}
	}
	return m[n][W];
}
int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int N, W;
		int i, val[101], weight[101];
		
		scanf("%d%d",&N,&W);
		for (i = 1; i <= N; i++)
		{
			int x, y, z;
			
			scanf("%d%d%d",&x, &y, &z);
			val[i] = x * y;
			weight[i] = z;
		}
		printf("%d\n", knapsack(weight, val, N, W));
	}
	return 0;
}

