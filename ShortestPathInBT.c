#include <stdio.h>

int get_shortestPath(int x, int y)
{
	int c = 0;
	
	while (x != y)
	{
		if (x > y)
		{
			x /= 2;
		}
		else
		{
			y /= 2;
		}
		c++;
	}
	return c;
}

int main(void)
{
	int n;
	
	scanf("%d", &n);
	while (n--)
	{
		int x, y;
		
		scanf("%d%d", &x, &y);
		printf("%d\n", get_shortestPath(x, y));
	}
	
	return 0;
}
