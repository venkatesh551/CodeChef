#include <stdio.h>

typedef unsigned long long ULL;
const ULL p = 1000000007;

ULL modPow(ULL a, unsigned b)
{
	ULL res = 1;
	
	for ( ; b ; b >>= 1)
	{
		if (b & 1)
		{
			res = (res * a) % p;
		}
		a = (a * a) % p;
	}
	return res;
}


int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		ULL ans;
		
		scanf("%d", &n);	
		ans = modPow(2, n);
		printf("%llu\n", ans-1);	
	}
	
	return 0;
}
