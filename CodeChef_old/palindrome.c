#include <stdio.h>
typedef long long LL;
const int p = 1000000007;

int mod_pow(int a, int b)
{
	int result = 1;
	
	for ( ; b > 0 ; b >>= 1)
	{
		if ((b & 1) == 1)
		{
			result = ((LL)result * a) % p;
		}
		a = ((LL)a * a) % p;
	}
	return result;
}

int find_sum(int n)
{
	int x = mod_pow(25, p-2);
	int y = mod_pow(26, (n+1)/2);
	int z = 52LL * x % p * (y-1) % p;
	
	if (n & 1) // n is odd
	{
		z = (z + p - y) % p;
	}
	return z;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		
		scanf("%d", &n);
		printf("%d\n", find_sum(n));
	}
	
	return 0;
}
