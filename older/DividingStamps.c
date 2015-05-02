#include <stdio.h>

int main(void)
{
	int i, n;
	long long sum = 0, p;
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		int x;
		
		scanf("%d", &x);
		sum += x;
	}
	p = ((long long )n) * (n+1) / 2;
	if (p == sum)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}	
	return 0;
}
