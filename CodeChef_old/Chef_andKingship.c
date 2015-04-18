#include <stdio.h>

#define MAX_SIZE 100001
static int A[MAX_SIZE];

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, n, min, pos;
		long long ans;
		
		scanf("%d", &n);
		min = 1000001;
		pos = 0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &A[i]);
			if (A[i] < min)
			{
				min = A[i];
				pos = i;
			}
		}
		ans = 0;
		for (i = 0; i < n; ++i)
		{
			if (pos != i)
				ans += ((long long) min) * A[i];
		}
		printf("%lld\n", ans);
	}
	
	return 0;
}
