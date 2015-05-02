#include <stdio.h>

#define MAX_SIZE 1001

int absVal(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int T, A[MAX_SIZE];
	
	scanf("%d", &T);
	while (T--)
	{
		int n, k, min, cnt, i, j;
		
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &A[i]);
		}
		min = 2e9;
		cnt = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				int x = absVal(A[i] + A[j] - k);
				
				if (x < min)
				{
					min = x;
					cnt = 1;
				}
				else if (x == min)
				{
					cnt++;
				}
			}
		}
		printf("%d %d\n", min, cnt);
	}
	
	return 0;
}
