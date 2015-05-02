#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100001
static char S[MAX_SIZE];
static int prime[MAX_SIZE], len;

void prime_gen(int n)
{
	int i, j = 0;
	
	prime[j++] = 2;
	for (i = 3 ; i < n; i += 2)
	{
		int k , flag = 0;
		
		for (k = 0; k < j && flag == 0; k++)
		{
			if (i % prime[k] == 0)	
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			prime[j++] = i;
		}
	}
	len = j;
}

int is_pal(char *s, int len)
{
	int i, j;
	
	for (i = 0, j = len-1; i < j ; i++, j--)
	{
		if (s[i] != s[j])
		{
			return 0;
		}	
	}
	return 1;
	
}

int main(void)
{
	int T;
	
	prime_gen(MAX_SIZE);
	scanf("%d", &T);
	while (T--)
	{
		int i, j, ans = 0;
		
		scanf("%s", S);
		len = strlen(S);
		for (i = 0; i < len; ++i)
		{
			for (j = 0; prime[j]+i <= len; j++)
			{
				if (is_pal(S+i, prime[j]))
				{
					ans++;
				}	
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
