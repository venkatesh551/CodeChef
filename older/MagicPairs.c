#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		long long int n;
		int i, x;
		
		scanf("%lld", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &x);
		}
		printf("%lld\n", (n * (n-1))/2);
	
	}
	
	return 0;
}
