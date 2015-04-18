#include <stdio.h>

int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int A[101], i, K, N, pos;
		
		scanf("%d",&N);
		for (i = 1; i <= N; i++)
		{
			scanf("%d", &A[i]);
		}
		scanf("%d", &K);
		pos = 1;
		for (i = 1; i <= N; i++)
		{	
			if (A[i] < A[K])
			{
				pos++;
			}		
		}
		printf("%d\n", pos);
	}
	return 0;
}
