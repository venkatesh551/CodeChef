#include <stdio.h>

int main()
{

	int n, p1, p2, sum1, sum2;

	scanf("%d", &n);

	p1 = p2 = 0;
	sum1 = sum2  = 0;
	while(n--)
	{
		int x, y, d;

		scanf("%d%d", &x, &y);
		sum1 += x;
		sum2 += y;
		d = sum1 - sum2;
		if(d > 0)	
		{
			if(d > p1)
				p1 = d;
	
		}
		else
		{
			d = -d;
			if(d > p2)
				p2 = d;
		}
	}
	if(p1 > p2)
		printf("1 %d\n", p1);
	else
		printf("2 %d\n", p2);
	return 0;
}
