#include <stdio.h>
#define MOD 1000000007

void find_fact(long long int *fact, int n, long long int mod)
{
	int i;

	fact[0] = fact[1] = 1;
	for (i = 2; i <= n; i++)
	{
		fact[i] = (i * fact[i-1]) % mod;
	}
}

long long int modpow(long long int base, long long int exp, long long int modulus)
{
	long long int result = 1;

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

void find_inverse(long long *inv, long long *fact, int n, long long mod)
{
	int i;

	for (i = 2; i <= n; i++)
	{
		inv[i] = modpow(fact[i], mod-2, mod);
	}
}

int main()
{
	long long int fact[501], inv[11];
	int  T;

	
	find_fact(fact, 500, MOD);
	find_inverse(inv, fact, 10, MOD);
	scanf("%d",&T);
	while (T--)
	{
		char  str[501];
		int i, ascii[128] = {0};
		long long ans;

		scanf("%s", str);
		for (i = 0; str[i] != 0; i++)
		{
			ascii[str[i]]++;
		}
		ans = fact[i];
		for (i = 'A'; i <= 'z'; i++)
		{
			if(ascii[i] > 1)
			{
				ans = (ans * inv[ascii[i]]) % MOD;
				ans %= MOD;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
