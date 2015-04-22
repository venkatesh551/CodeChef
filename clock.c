#include <stdio.h>

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int h, m;
		double ans;
		
		scanf("%d%d", &h, &m);
		if (h > 23 || m > 59)
		{
			puts("Invalid Time");
		}
		else
		{
			ans = abs((60 * h - 11 * m)/2.0);
			printf("%d.0\n", ans);
		}
		
	}
	
	return 0;
}
