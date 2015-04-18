#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

#define MAX_SIZE 100001
typedef struct song{
	int B;
	int L;
}song;

static song S[MAX_SIZE];
static int uniq[MAX_SIZE];

int comp(const void *a , const void *b)
{
	return  (*(int*)a) - (*(int*)b) ;
}

int compare(const void *a , const void *b)
{
	if (((song*)a)->B  == ((song*)b)->B )
	{
  		return  ((song*)a)->L - ((song*)b)->L ;
  	}
  	else
  	{
  		return  ((song*)a)->B - ((song*)b)->B;
  	}
}

int main()
{
	int T;

	scanf("%d",&T);
	while (T--){
		int N, i, j;
		long long total, ans;
		
		scanf("%d",&N);
		for(i = 0; i < N; i++)
		{
			scanf("%d%d",&S[i].B,&S[i].L);
		}
		qsort(S, N, sizeof(song), compare);
		
		uniq[0] = S[0].L;
		total = 0;
		for (i = j = 1; i < N ; i++)
		{
			if (S[i-1].B < S[i].B)
			{
				uniq[j] = S[i].L; j++;
			}
			else
			{
				total += S[i].L;
			}
		}
		qsort(uniq, j, sizeof(int), comp);
		ans = j * total;
		for (i = 0; i < j; i++)
		{
			ans +=  (i + 1) * (long long) uniq[i] ;
		}
		printf("%lld\n",ans);
	}

	return 0;
}
