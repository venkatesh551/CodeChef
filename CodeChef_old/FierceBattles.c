#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, n, m, C, L, A[101] = {0}, ans;
		
		scanf("%d%d", &n, &m);
		for (i = 0; i < n ; ++i)
		{
			scanf("%d%d", &C, &L);
			A[L] += C;
		}
		ans = 0;
		for (i = 0; i < m ; ++i)
		{
			scanf("%d%d", &C, &L);
			if (A[L] < C)
			{
				ans += C - A[L];
				A[L] = 0;
			}
			else
			{
				A[L] -= C;
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
