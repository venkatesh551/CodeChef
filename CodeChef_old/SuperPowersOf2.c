#include <stdio.h>
const long long p = 1000000007;

long long mod_pow(long long a, unsigned b)
{
	long long result = 1;
	
	for ( ; b ; b >>= 1)
	{
		if (b & 1)
		{
			result = (result * a) % p;
		}
		a = (a * a) % p;
	}
	return result;
}

long long find_superPower(int n)
{
	int i, B[32], x ;
	long long res;
	
	x = n;
	for (i = 0; i < 32; i++)
	{
		B[i] = x & 1;
		x >>= 1;
	}
	for (i = 31; i >= 0 && B[i] == 0; i--)
		;
	res = 2;
	for (i = i-1; i >= 0; i--)
	{
		res = mod_pow(res, 10);
		if (B[i])
		{
			res = (res * 2) % p;
		}
	}
	return (res * res) % p;
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
		ans = find_superPower(n);
		printf("%lld\n", ans);
	}
	
	return 0;
}


