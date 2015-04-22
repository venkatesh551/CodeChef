#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100001

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int T, A[MAX_SIZE];
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, j;
		
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &A[i]);
		}
		qsort(A, n, sizeof(int), compare);
		for (i = 0, j = n-1; i < j; i++, j--)
		{
			printf("%d %d ", A[i], A[j]);
		}
		if (i == j)
		{
			printf("%d", A[i]);
		}
		printf("\n");
	}
	
	return 0;
}
