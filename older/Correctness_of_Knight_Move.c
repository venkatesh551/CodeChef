#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int abs(int x)
{
	return x < 0 ? -x : x;
}

int is_valid_char(char c)
{
	return c >= 'a' && c <= 'h' ;
}

int is_valid_digit(char d)
{
	return d >= '1' && d <= '8' ;
}

int is_valid_input(const char *str)
{
	int len = strlen(str);
	
	return (len == 5 && str[2] == '-' &&
		   is_valid_char(str[0]) 
	    && is_valid_char(str[3])
	    && is_valid_digit(str[1])
	    && is_valid_digit(str[4]));
	
}

int main()
{

	int N;
	char str[11];

	gets(str);
	N = atoi(str);
	while (N--)
	{
		gets(str);
		if(is_valid_input(str))
		{
			int x = abs(str[0] - str[3]);
			int y = abs(str[1] - str[4]);
		
			if((x == 1 && y == 2) || (x == 2 && y == 1))
			{
				puts("Yes");
			}
			else
			{
				puts("No");
			}
		}
		else
		{
			puts("Error");
		}
	}
	return 0;
}
