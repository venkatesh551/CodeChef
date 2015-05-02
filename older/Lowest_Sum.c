#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 20001
long long A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE];

int compare (const void * a, const void * b)
{
  return ( *(long long*)a - *(long long*)b );
}

void read_Array(long long *A, int K)
{
	int i;
	
	for (i = 0; i < K; i++)	
	{
		scanf("%lld", &A[i]);
	}
	qsort(A, K, sizeof(long long), compare);
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int K, Q;
		
		scanf("%d%d", &K,&Q);
		read_Array(A, K);
		read_Array(B, K);
		while (Q--)
		{
			int pos, x;
			
			scanf("%d", &pos);
			x = sqrt(pos);
			if (x * x == pos)
			{
				printf("%lld\n", A[x-1]+B[x-1]);
			}
			else
			{
				int i, j = 0;
				
				for (i = 0; i < x; i++)
				{
					C[j++] = A[i] + B[x];
					C[j++] = A[x] + B[i];
				}
				qsort(C, j, sizeof(long long), compare);
				printf("%lld\n",C[pos-x*x-1]);
			}
		}
	}
	
	return 0;
}
