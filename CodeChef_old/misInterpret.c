#include <stdio.h>
#define MOD 1000000007
#define MAXN 100000

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

int cnt_noOf_groups(int n)
{
	int i, cnt = n & 1;
	int A[MAXN] = {0};

	for (i = 1; i < n; i+= 2)
	{
		if (A[i] == 0)
		{
			int j = i;
			
			while ((j & 1) == 1 && A[j] == 0)
			{
				printf("%d ", j);
				A[j] = 1;
				j = (n + j + 1) / 2;		
				while ((j & 1) == 0)
				{
					A[j] = 1;
					j /= 2;
				}	
			}
			printf("\n");
			cnt++;
			A[i] = 1;

		
		}
	}
	printf("%d\n",cnt);
	return cnt;
}

int main()
{
	int T;

	scanf("%d",&T);
	while (T--)
	{
		int N, c;
		long long ans;
	
		scanf("%d",&N);
		c = cnt_noOf_groups(N);
		ans = modpow(26, c, MOD);
		printf("%lld\n", ans);
	}
	return 0;
}
