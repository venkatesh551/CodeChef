#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int T;
	char str[3];
	
	gets(str);
	T = atoi(str);
	while (T--)
	{
		int i, n;
		char s[40][6], direc[40][51];
		
		gets(str);
		n = atoi(str);
		for (i = 0; i < n; i++)
		{
			scanf("%s",s[i]);
			gets(direc[i]);
		}
		printf("Begin%s\n",direc[n-1]);
		for (i = n-1; i > 0; i--)
		{
			if(s[i][0] == 'L')
			{
				printf("Right");
			}
			else
			{
				printf("Left");
			}
			puts(direc[i-1]);
		}
		printf("\n");
	}
	
	return 0;
}
