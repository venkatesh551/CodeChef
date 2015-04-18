#include <stdio.h>

#define MAX_SIZE 10001
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, d, A[MAX_SIZE], i, j, ans;
		
		scanf("%d%d", &n,&d);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &A[i]);
		}
		ans = A[0];
		for (i = 0; i + d < n-1;)
		{
			int min = A[i+1];
			int pos = i+1;
			
			for (j = i+2; j <= i+d ; ++j)
			{
				if (min >= A[j])
				{
					min = A[j];
					pos = j;
				}
			}
			ans += min;
			i = pos;
		}
		if (n > 1)
			ans += A[n-1];
		printf("%d\n", ans);
	
	}
	
	return 0;
}
