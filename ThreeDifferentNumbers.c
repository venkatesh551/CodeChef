#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
typedef unsigned long long ULL;

int compare(const void *a, const void *b)
{
	const ULL *p = a;
	const ULL *q = b;

	if(*p > *q)
		return 1;
	else if(*p < *q)
		return -1;
	else
		return 0;
}

int main()
{
	int T;

	scanf("%d", &T);
	while(T--)
	{
		ULL num[3], ans;
		int i;
		for(i = 0; i < 3; i++)
		{
			scanf("%llu", &num[i]);
		}
		qsort(num, 3, sizeof(ULL), compare);
		ans = 1;
		for(i = 0; i < 3; i++)
		{
			ans *= (num[i] - i) % MOD ;
			ans %= MOD;
		}
		printf("%llu\n", ans);
	}
	return 0;
}
