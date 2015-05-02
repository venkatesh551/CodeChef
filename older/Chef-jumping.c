#include <stdio.h>

int main(void)
{
	long long n, p, x;
	
	scanf("%lld", &n);
	p = 3 * (n / 3);
	x = ((p & 1) == 0) && (p == n-1);
	if (p == n || x)
	{
		puts("yes");
	}
	else
	{
		puts("no");
	}
	return 0;
}
