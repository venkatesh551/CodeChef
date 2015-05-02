#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, x, flag;

		scanf("%d", &N);
		
		flag = 0;
		for(x = N/7; x >= 0 ; x--)
		{
			int d = N - 7*x;
			if(d % 4 == 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1)
		{	
			printf("%d\n", 7*x);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
