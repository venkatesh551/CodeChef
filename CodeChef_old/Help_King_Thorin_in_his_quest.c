#include <stdio.h>

#define MAX_SIZE 100007
static char S[MAX_SIZE];

int main(void)
{
	int i, x, len, map[128] = {0}, odd;
	
	scanf("%s", S);
	for (i = 0; S[i]; ++i)
	{
		x = S[i];
		map[x]++;
	}
	len = i;
	odd = 0;
	for (i = 'a'; i <= 'z'; ++i)
	{
		if (map[i] & 1)
		{
			odd++;
		}
	}
	if ((len & 1) == 0)
	{
		if (odd == 0)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	else
	{
		if (odd == 1)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	return 0;
}
