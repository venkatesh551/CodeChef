#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int compare (const void * a, const void * b)
{
  if ( *(unsigned *)a <  *(unsigned*)b )
	return -1;
  else if ( *(unsigned*)a == *(unsigned*)b ) 
	return 0;
  else 
	return 1;
}

int main()
{

	unsigned N, D, L[100001];
	unsigned i, ans;

	scanf("%u%u", &N, &D);
	for(i = 0; i < N; i++)
		scanf("%u",&L[i]);
	qsort(L, N, sizeof(unsigned), compare);
	ans = 0;
	for(i = 0; i < N-1; )
	{
		unsigned diff = L[i+1] - L[i] ;
		if(diff > D)
			i++;
		else
		{
			ans++;
			i += 2;
		}
	}
	printf("%u\n", ans);

	return 0;
}
