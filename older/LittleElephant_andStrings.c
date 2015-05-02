#include <stdio.h>
#include <string.h>

int is_substr_exist(char lucky_str[][51], const char *s, const int K)
{
	int i;

	for (i = 0; i < K; i++)
	{
		if(strstr(s, lucky_str[i]) != NULL)
			return 1;
	}	
	return 0;
}

int main()
{

	int K, N, i;
	char lucky_str[50][51];

	scanf("%d%d", &K, &N);
	for (i = 0; i < K; i++)
	{
		scanf("%s", lucky_str[i]);
	}
	for (i = 0; i < N; i++)
	{
		char s[51];
		int len;

		scanf("%s", s);
		len = strlen(s);
		if(len >= 47 || is_substr_exist(lucky_str, s, K))
		{
			puts("Good");
		}
		else		
		{
			puts("Bad");
		}
	}

	return 0;
}
