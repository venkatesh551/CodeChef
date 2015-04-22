#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100007
static char S[MAX_SIZE];

int isGood()
{
	int i, len;
	len = strlen(S);	
	if (len == 3 && strcmp(S, "101") == 0)
	{
		return 1; //True
	}
	for (i = 1; i < len-1; ++i)
	{
		if (S[i] == '1' && S[i+1] == '0' && (S[i-1] == '0' || S[i+2] == '1'))
		{
			return 1; //True
		}
	}
	return 0; // False
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{		
		scanf("%s", S);
		if(isGood(S))
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
