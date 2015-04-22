#include <stdio.h>
#include <stdlib.h>

int A[1000000];

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main(void)
{
	int i, N, X, pass, fail;
	
	scanf("%d%d", &N, &X);
	for(i = 0; i < N; ++i)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), cmp);
	pass = fail = 0;
	for(i = 0; X > 0 && i < N; ++i)
	{
		if(X > A[i])
		{
			X -= A[i];
			pass++;
		}
		else
		{
			if (X < A[i]/2)
				fail++;
			X = 0;
		}
	}
	printf("%d %d\n", fail, pass);
	return 0;
}
