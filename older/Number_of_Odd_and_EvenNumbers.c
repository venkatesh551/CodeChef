#include <stdio.h>

int main(void)
{
	int n, c = 0;
	
	scanf("%d", &n);
	while (n--)
	{
		int x;
		
		scanf("%d", &x);
		if (x & 1)
			c++;
		else
			c--;	
	}
	printf("%d\n", c >= 0 ? c: -c);
	return 0;
}
