#include <stdio.h>
#define MAX_SIZE 301
int main(void)
{
	int i, j, N, Q, A[MAX_SIZE][MAX_SIZE];
	int x, y, p, q;
	
	scanf("%d", &N);
	for (i = 1; i <= N; ++i)
	{
		for (j = 1; j <= N; ++j)
		{
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d", &Q);
	while (Q--)
	{
		int cnt, d[11] = {0};
		
		scanf("%d%d%d%d", &x, &y, &p, &q);
		for (i = x; i <= p; ++i)
		{
			for (j = y; j <= q; ++j)
			{
				d[A[i][j]] = 1;
			}
		}
		cnt = 0;
		for (i = 0; i < 11; ++i)
		{
			if (d[i])
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
