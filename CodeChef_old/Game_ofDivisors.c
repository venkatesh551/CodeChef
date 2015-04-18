#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n;
		
		scanf("%d", &n);
		if (n & 1)
		{
			puts("Tom");
		}
		else
		{
			puts("Mike");
		}
	
	}
	
	return 0;
}
