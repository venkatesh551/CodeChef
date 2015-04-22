#include <cstdio>

int gcd(int a, int b)
{	
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;		
	}
	return a;
}


int main(void)
{
	int t;
	//const int Max = 1e5;
		
	scanf("%d", &t);
	while (t-- > 0)
	{
		int n, g;
		scanf("%d%d", &n, &g);
		for (int i = 1; i < n; ++i)	
		{
			int x;
			scanf("%d", &x);
			g = gcd(g, x);
		}
		if (g == 1)
		{
			printf("%d\n", n);
		}
		else
		{
			puts("-1");
		}
	}
	return 0;
}
