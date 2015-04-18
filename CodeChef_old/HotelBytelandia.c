#include <stdio.h>

#define MAXVAL 1001
int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, v[MAXVAL] = {0};
		int i, j, max, arr[100], dept[100];

		scanf("%d", &N);
		for(i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		for(i = 0; i < N; i++)
			scanf("%d", &dept[i]);
		for(i = 0; i < N; i++)
		{
			for(j = arr[i]; j < dept[i]; j++)
			{
				v[j]++;
			}
		}
		max = 0;
		for(i = 0; i < MAXVAL; i++)
		{	
			if(v[i] > max)
			{
				max = v[i];
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
