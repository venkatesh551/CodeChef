#include <stdio.h>

#define MAX_SIZE 100001
typedef long long LL;

LL max(LL *A, LL n)
{
	LL i, r = A[0];
	
	for (i = 1; i < n; ++i)
	{
		if (A[i] > r)
		{
			r = A[i];
		}
	}
	return r;
}

void SubtractEachElement(LL *A, LL n, LL max)
{
	int i;
	
	for (i = 0; i < n; ++i)
	{
		A[i] = max - A[i];
	}
}

int main(void)
{
	LL n, k, i, A[MAX_SIZE], mx;
	
	scanf("%lld%lld", &n, &k);
	for (i = 0; i < n; ++i)
	{
		scanf("%lld", &A[i]);
	}
	if (k > 0)
	{
		mx = max(A, n);
		SubtractEachElement(A, n, mx);
		if ((k & 1) == 0)
		{
			mx = max(A, n);
			SubtractEachElement(A, n, mx);
		}
	}
	for (i = 0; i < n; ++i)
	{
		printf("%lld ", A[i]);
	}
	printf("\n");
	return 0;
}

