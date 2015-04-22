#include <stdio.h>

long long modpow(long long base, long long exp, long long modulus)
{
	long long result = 1;
	
	base %= modulus;

	while (exp > 0)
	{
		if (exp & 1)
		{
			result = (result * base) % modulus;
		}
		base = (base * base) % modulus;
		exp >>= 1;
	}
	return result;
}

long long ncr_modp(long long n, const long long p)
{

	long long a = 1, b = 1, c, r = n/2;
	int i;

	for (i = 2; i <= n; i++)
	{
		a = (a * i) % p;
	}
	for (i = 2; i <= r; i++)
	{
		b = (b * i) % p;
	}
	c = (b * b * 2) % p;
	return (a * modpow(c, p-2, p)) % p;
}


int main()
{
	int T;

	scanf("%d",&T);
	while (T--)
	{
		int n, i;
		long long ans;
		const long long p = 1000000007;

		scanf("%d",&n);
		for (i = 0; i < n; i++)
		{
			int x;

			scanf("%d",&x);
		}
		ans = modpow(2, n-1, p);
		if ((n & 1) == 0)
		{	
			ans -= ncr_modp(n, p);
			while (ans < 0)
			{
				ans += p;
			}
		}
		printf("%lld\n",ans);	
	}
	return 0;
}
