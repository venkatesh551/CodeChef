#include <stdio.h>
#include <stdlib.h>

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	while (1)
	{
		int n, s;
		char str[16];
		
		gets(str);
		n = atoi(str);
		if (n == 0)
		{
			break;
		}
		while (n--)
		{			
			gets(str);
		}
		s = atoi(str+2);
		printf("%d\n", abs(s)-1);
		gets(str);
	}
	
	return 0;
}
