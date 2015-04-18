#include <stdio.h>

#define MAX_SIZE 8001
int main(void)
{
	int T, i, j, k, x, A[MAX_SIZE];

	x = 1;
	i = k = 0;
	while (i < MAX_SIZE)
	{
		for (j = 0; j < i-1 && k < MAX_SIZE; ++j)
		{
			A[k++] = A[j] + A[i-1];
		}
		x *= 5;
		A[k++] = x;
		i = k;
	}
	scanf("%d", &T);
	while (T--)
	{
		int n;
		
		scanf("%d", &n);
		printf("%d\n", A[n-1]);	
	}
	
	return 0;
}
