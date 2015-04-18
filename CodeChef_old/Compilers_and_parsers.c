#include <stdio.h>

#define MAX_SIZE 1000001
static char S[MAX_SIZE];

int longestValidPrefixLength(const char *s)
{
	int c, ans, i;
	
	c = ans = 0;
	for (i = 0; s[i] != 0; ++i)
	{
		if (s[i] == '<')
			c++;
		else
			c--;
		if (c == 0)
		{
			ans = i + 1;
		}
		else if (c < 0)
		{
			return ans;
		}
	}
	return ans;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", S);
		printf("%d\n", longestValidPrefixLength(S));
	}
	
	return 0;
}
