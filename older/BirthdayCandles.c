#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int i, zeroCount, minCount, minInd;

		scanf("%d", &zeroCount);
		minCount = minInd = 0xFF;
		for( i = 1; i < 10; i++)
		{
			int x;

			scanf("%d", &x);
			if(minCount > x)
			{
				minCount = x;
				minInd = i;
			}
		}
		if(zeroCount < minCount)
		{
			putchar('1');
			for(i = 0; i <= zeroCount; i++)			
				putchar('0');
		}
		else
		{
			for(i = 0; i <= minCount; i++)
				putchar(minInd +'0');
		}
		putchar('\n');
	}
	return 0;
}
