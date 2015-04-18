#include <stdio.h>

long long power(long long a, int b)
{
	long long res = 1;
	
	while (b)
	{
		if (b & 1)
			res *= a;
		b >>= 1;
		a *= a;
	}
	return res;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		long long ans;
		
		scanf("%d", &n);
		if (n % 4 != 0)
		{
			ans = 0;
		}
		else
		{
			ans = power(3, n/4);
			if (n > 4)
			{
				ans += 2;
			}
		}
		printf("%lld\n", ans);
	}
	
	return 0;
}
