#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

	int i, T;
	char str[315];

	gets(str);
	T = atoi(str);
	while(T--)
	{
		char ascii[128] = {0};

		gets(str);
		for(i = 0; str[i] != 0; i++)
		{	
			if(isalpha(str[i]))
			{
				int c = tolower(str[i]);
				ascii[c] = 1;
			}
		}
		for(i = 'a'; i <= 'z' && ascii[i] == 1; i++)
				;
		if(i > 'z')
			putchar('~');
		else
			putchar(i);
		putchar('\n');
	}
	return 0;
}
