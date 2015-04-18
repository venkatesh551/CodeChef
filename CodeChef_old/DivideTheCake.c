#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		
		scanf("%d", &n);
		if (n <= 360 && 360 % n == 0)
		{
			putchar('y');
		}
		else
		{
			putchar('n');
		}
		if (n <= 360)
			puts(" y y");
		else
			puts(" n n");
	}
	
	return 0;
}
