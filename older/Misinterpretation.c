#include <stdio.h>
#include <stdlib.h>
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
	int *A = calloc(sizeof(int), MAXN);
	int *mark = calloc(sizeof(int), MAXN);
	int i, j, cnt;

	for (i = 1; i <= n/2; i++)
	{
		A[i] = i + i;
	}
	for (j = 1; i <= n; i++, j += 2)
	{
		A[i] = j;
	}
	cnt  = 0;
	for (i = 1; i <= n; i++)
	{
		if(mark[i] == 0)
		{
			cnt++;
			for (j = i; mark[j] == 0; j = A[j])
			{
				mark[j] = 1;
			}
		}
	}
	free(A);
	free(mark);
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
