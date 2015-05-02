#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *) a -  *(int *) b;
}

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		unsigned min, i, N, S[5000];
	
		scanf("%u", &N);
		for(i = 0; i < N; i++)
		{
			scanf("%u", &S[i]);
		}
		qsort(S, N, sizeof(unsigned), cmp);
		min = S[N-1];
		for(i = 1; i < N; i++)
		{
			int d = S[i] - S[i-1];
			if(d < min)
			{
				min = d;
			}
		}
		printf("%u\n", min);
	}
	return 0;
}
