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

long long fact_modp(const long long x, const long long p)
{
	long long a = 1;
	int i;
	
	for (i = 2; i <= x; i++)
	{
		a = (a * i) % p;
	}
	return a;
}
	
long long ncr_modp(const long long x, const long long y, const long long p)
{

	long long temp, result;
	
	temp = fact_modp(x, p) * fact_modp(y, p) % p;
	result =  modpow(temp, p-2, p) * fact_modp(x + y, p);
	
	return result % p;
}

int count_setBits(int n)
{
	int c;
	
	for (c = 0; n > 0; c++)
	{
		n &= (n-1);
	}
	return c;
}

int find_stair_cnt(int  n, const long long p)
{
	int ans  = 1, x = n-2,  y = 1;
	
	while (x >= 0)
	{
		ans = (ans + ncr_modp(x, y, p)) % p;
		x -= 2;
		y++;
	}
	return count_setBits(ans);
}


int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, G, ans;
		const long long p = 1000000007;
		
		scanf("%d%d",&n, &G);
		ans = find_stair_cnt(n, p);
		if (ans == G)
		{
			puts("CORRECT");
		}
		else
		{
			puts("INCORRECT");
		}
	
	}
	
	return 0;
}
