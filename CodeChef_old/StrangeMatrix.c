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
		int ans, N, M;

		scanf("%d%d", &N, &M);
		if(N == 1)
		{
			ans = M;
		}
		else if(M == 1 || N == M)
		{
			ans = N;
		}
		else
		{
			ans = 1 + gcd(N-1, M-1);
		}
		printf("%d\n", ans);
	}
	return 0;
}
