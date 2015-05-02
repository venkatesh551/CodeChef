#include <stdio.h>
#include <math.h>

const long long int mod = 1000000007 ;

int noOf_digits(int n)
{
	int cnt  = 0;
	
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return cnt;
}

long long sum(long long n)
{
	return (n * (n + 1))/2;
}

int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int L, R, a, b, i;
		long long ans;
		
		scanf("%d%d",&L,&R);
		a = noOf_digits(L);
		b = noOf_digits(R);
		if (a == b)
		{
			ans = (sum(R) - sum(L-1)) * a;
		}
		else
		{
			long long min, max = pow(10, a) - 1;
			
			ans = (sum(max) - sum(L-1)) * a % mod;
			for (i = a+1; i < b; i++)
			{
				min = pow(10, i-1);
				max = pow(10, i)-1;
				ans += (sum(max) - sum(min-1)) * i % mod;
			}
			min = pow(10, b-1);
			ans += (sum(R) - sum(min-1)) * b % mod;
		}
		printf("%lld\n", ans % mod);
	}
	
	return 0;
}
