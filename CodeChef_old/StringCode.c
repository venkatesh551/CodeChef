#include <stdio.h>
#include <string.h>

void reverse(char *str, int s, int e)
{
	while (s < e)
	{
		char c = str[s];
		str[s] = str[e];
		str[e] = c;
		s++;
		e--;
	}
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		char S[51];
		int len;
				
		scanf("%s", S);
		len = strlen(S);
		reverse(S, 0, len/2-1);
		reverse(S, len/2, len-1);
		puts(S);
	}
	
	return 0;
}
