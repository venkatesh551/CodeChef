#include <stdio.h>

int is_Ciel_Num(unsigned long long x)
{
	int a, b, c;
	
	a = b = c = 0;
	while (x)
	{
		int t = x % 10;
		
		if (t == 8)
			a++;
		else if(t == 5)
			b++;
		else if(t == 3)
			c++;
		else
			return 0;
		x /= 10;
	}
	if (a >= b && b >= c)
		return 1;
	else
		return 0;
}

int main(void)
{
	unsigned long long n = 8;
	int x = 0;
	
	while (x < 50000)
	{	
		if (is_Ciel_Num(n))
		{
			printf("%d : %llu\n", x, n);
			x++;
		}
		n++;
	}
	
	return 0;
}
