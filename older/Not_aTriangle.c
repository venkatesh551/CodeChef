#include <stdio.h>
#include <stdlib.h>
#define  MAXN 2000

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{

	while(1)
	{
		int  i, j, k, ans;
		int N, A[MAXN];

		scanf("%d", &N);
		if(N == 0)
			break;
		for(i = 0; i < N; i++)
			scanf("%d", &A[i]);
		qsort(A, N, sizeof(int), compare);
		ans  = 0;
		for(k = N-1; k >=2; k--)
		{			
			i = 0;
			j = k-1;
			while(i < j)
			{
				if(A[i] + A[j] < A[k])
				{
					ans += j - i;
					i++;
				}
				else
				{
					j--;
				}
			}	
			
		}
		printf("%d\n", ans);
	}

	return 0;
}
