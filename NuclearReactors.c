#include <stdio.h>

int main()
{

	unsigned A, N, K;

	scanf("%u%u%u", &A, &N, &K);
	while(K--)
	{
		printf("%u ", A % (N+1));
		A /=  (N+1);
	}
	printf("\n");
	return 0;
}
