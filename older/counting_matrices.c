#include <stdio.h>

typedef long long LL;

LL FactorCountUptoN(LL n)
{
    int i;
    LL sum = 0;

    for (i = 1; i * i <= n; i++)
    {
    	sum += n/i;
    }
    sum = 2 * sum - (i-1) * (i-1);
    return sum;
}


int main(void)
{
	int T, i, j;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		LL ans;
		
		scanf("%d", &n);
		ans  = 0;
		for (i = 1, j = n-1; i < j; i++, j--)
		{			
			ans += 2 * FactorCountUptoN(i * j - 1);
		}
		if (i == j)
		{
			ans += FactorCountUptoN(i * j - 1);
		}
		printf("%lld\n", ans);
	}
	
	return 0;
}
