#include <stdio.h>
#define MAX_SIZE 100001

int get_maxLen(int *A, int n)
{
	int i, len = 1, max = 1;

	for (i = 1; i < n; ++i)
	{
		if (A[i] == A[i-1] + 1)
		{
			len++;
		}
		else
		{
			if (max < len)
			{
				max = len;
			}
			len = 1;
		}	
	}
	if (max < len)
	{
		max = len;
	}
	return max;
}

int main(void)
{
	int n, m, i, A[MAX_SIZE];
	
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}
	printf("%d\n", get_maxLen(A, n));
	while (m--)
	{
		int x, y;
		
		scanf("%d%d", &x, &y);
		A[x-1] = y;
		printf("%d\n", get_maxLen(A, n));
	}
	return 0;
}
