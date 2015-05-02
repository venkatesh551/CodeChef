#include <stdio.h>

int find_min(int *dp, int n)
{
	int i, min = dp[0];

	for(i = 1; i < n; i++)
	{
		if (dp[i] < min)
		{
			min = dp[i];
		}
	}
	return min;
}

int find_max(int *dp, int n)
{
	int i, max = dp[0];

	for(i = 1; i < n; i++)
	{
		if (dp[i] > max)
		{
			max = dp[i];
		}
	}
	return max;
}

int main()
{
	int T;

	scanf("%d", &T);
	while (T--)
	{
		int i, N, A[10], dp[6],  min, max;
		
		scanf("%d", &N);
		for (i = 0; i < N; i++)
		{
			scanf("%d", &A[i]);
		}
		min = max = A[0];
		for (i = 1; i < N; i++)
		{
			dp[0] = min + A[i];
			dp[1] = min - A[i];
			dp[2] = min * A[i];	
	
			dp[3] = max + A[i];
			dp[4] = max - A[i];
			dp[5] = max * A[i];
			min = find_min(dp, 6);
			max = find_max(dp, 6);
		}
		printf("%d\n", min);
	}
	return 0;
}	
