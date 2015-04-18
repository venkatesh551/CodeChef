#include <stdio.h>

int gcd(int a, int b)
{
	while(b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{

	int T;
	
	scanf("%d", &T);
	while(T--)
	{
		int ans, N, i;

		scanf("%d%d", &N, &ans);
		for(i = 1; i < N && ans > 1; i++)
		{
			int next;
			scanf("%d", &next);
			ans = gcd(ans, next);
		}
		printf("%d\n", ans);
	}

	return 0;
}
