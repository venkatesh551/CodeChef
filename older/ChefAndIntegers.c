#include <stdio.h>
#include <stdlib.h>
#define MAXN 100000

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{

	int i, N, X,  A[MAXN], count;
	long long ans;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &A[i]);
	scanf("%d", &X);
	qsort(A, N, sizeof(int), compare);
	count = 0;
	for(i = 0; i < N && A[i] < 0; i++)
		count++;
	if(X == 0 )
	{
		ans = 0;
	}
	else if(X < count)
	{
		ans =  1LL * -A[X] * X;
		for(i = 0; i < X; i++)
			ans += A[X] - A[i];
	}
	else
	{
		ans = 0LL;
		for(i = 0; i < count; i++)
			ans -= A[i];
	}
	printf("%lld\n", ans);
	return 0;
}
