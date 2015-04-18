#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001
const int p = 10000009;
static char S[MAX_SIZE];

int mod_pow(long long a, int b)
{
	int result = 1;
	
	for ( ; b > 0 ; b >>= 1)
	{
		if ((b & 1) == 1)
		{
			result = (result * a) % p;
		}
		a = (a * a) % p;
	}
	return result;
}

int find_noOfWays(const char *str)
{
	int i, j, len, c;
	
	len = strlen(str);
	c = 0;
	for (i = 0, j = len-1; i <= j; i++, j--)
	{
		if (str[i] == str[j])
		{
			if (str[i] == '?')
			{
				c++;
			}
		}
		else if (str[i] != '?' && str[j] != '?')
		{
			return 0;
		}
	}
	return mod_pow(26, c);
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{		
		scanf("%s", S);
		printf("%d\n", find_noOfWays(S));
	}
	
	return 0;
}
