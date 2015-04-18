#include <stdio.h>
#include <string.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		char str[2014];
		int len, i;

		scanf("%s", str);
		len = strlen(str);
		for(i = len-4; i >= 0; i--)
		{
			if( (str[i] == '?' || str[i] == 'C') &&
				(str[i+1] == '?' || str[i+1] == 'H') &&
				(str[i+2] == '?' || str[i+2] == 'E') &&
				(str[i+3] == '?' || str[i+3] == 'F') )
			{
				str[i] = 'C'; str[i+1] = 'H';
				str[i+2] = 'E'; str[i+3] = 'F';
				i -= 3;
			}		
		}
		for(i = 0; i < len; i++)
		{
			if(str[i] == '?')
			{
				str[i] = 'A';
			}
		}
		puts(str);
	}
	return 0;
}
