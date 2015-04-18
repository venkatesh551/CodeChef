#include <stdio.h>

int main()
{
	
	int N, A[100000], i, j
	long long sum;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
		scanf("%d", &A[i]);

	sum = 0;
	for(i = 0; i < N; i++)
	{
		for(j = i+1; j < N; j++)
		{
			sum += (A[i] & A[j]);
		}
	}
	printf("%lld\n", sum);
	return 0;
}
