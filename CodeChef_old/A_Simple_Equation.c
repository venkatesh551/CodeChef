#include <stdio.h>

int min(int x, int y)
{
	return x < y ? x : y;
}

long long find_sol(int n, int a, int b, int c)
{
	int i, j, x, y;
	long long ans = 0;
	x = min(a, n);
	y = min(b, n);
	for (i = 0; i <= x; i++)
	{
		for (j = 0; j <= y && (i+j) <= n; j++)
		{
				ans += 1 + min(n-i-j, c);		
		}
	}
	return ans;
}

int main(void)
{


	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, a, b, c;
		
		scanf("%d%d%d%d", &n, &a, &b, &c);
		printf("%lld\n", find_sol(n, a, b, c));
	
	}
	
	return 0;
}
