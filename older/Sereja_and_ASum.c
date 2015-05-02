#include <stdio.h>

#define MOD 1000000007

long long pow_mod(long long a, long long b, long long p)
{
	long long res = 1;
	
	while (b)
	{
		if (b & 1)
			res = (res * a) % p;
		a = (a * a) % p;	
		b >>= 1;
	}
	return res;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, max, cnt, i;
		long long ans;
		
		scanf("%d", &n);
		max = cnt = 0;
		for (i = 0; i < n; i++)
		{
			int x;
			
			scanf("%d", &x);
			if (x > max)
			{
				max = x;
				cnt = 1;
			}
			else if(x == max)
			{
				cnt++;
			}
		}
		ans = pow_mod(2, cnt, MOD);
		printf("%lld\n", ans-1);
	
	}
	
	return 0;
}
