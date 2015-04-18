#include <stdio.h>
#define MAX_SIZE  1007
static int A[MAX_SIZE],
		   B[MAX_SIZE][MAX_SIZE], 
		   C[MAX_SIZE][MAX_SIZE],
		   R[MAX_SIZE][MAX_SIZE];
		   
void read(int p[][MAX_SIZE], int n, int m)
{
	int i, j;
	
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			scanf("%d", &p[i][j]);
		}
	}
}

int calc_points(int p[][MAX_SIZE], int q[][MAX_SIZE], 
				 int r[][MAX_SIZE], int n, int m, int k)
{

	int i, j, ans, max, ind;
	
	for (i = 1; i <= n; ++i)
	{
		max = r[i][0];
		
		for (j = 1; j <= m; ++j)
		{
			r[i][j] = p[i][j] - q[i][j];
			if (r[i][j] > max)
			{
				max = r[i][j];
			}
		}
		r[i][m+1] = max;
	}
	max = 0;
	ind = 0;
	for (i = 1; i <= n; ++i)
	{
		if (max < r[i][m+1])
		{
			max = r[i][m+1];
			ind  = i;
		}
	}
	ans  = k * max;
	for (i = 1; i <= n; i++)
	{
		ans += r[i][A[i]];
	}
	if (k > 0)
	{
		ans -= r[ind][A[ind]];
	}
	return ans;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int N, M, K, i;
		
		scanf("%d%d%d", &N, &M, &K);
		for (i = 1; i <= N; ++i)
		{
			scanf("%d", &A[i]);
		}
		read(B, N, M);
		read(C, N, M);
		printf("%d\n", calc_points(B, C, R, N, M, K));
	}
	
	return 0;
}
