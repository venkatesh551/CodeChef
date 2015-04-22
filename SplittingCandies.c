#include <stdio.h>

int main()
{
	int T;

	scanf("%d", &T);
	while(T--)
	{
		unsigned long long int N, K, q, r;
		scanf("%llu%llu", &N, &K);
		if(K != 0)
		{
			q  = N / K;
			r = N % K;
		}else
		{
			q = 0;
			r = N;
		}
		printf("%llu %llu\n",q, r);
	}
	return 0;
}
