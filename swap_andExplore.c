#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		char S[100001];
		int n, len, i, j, cnt;
		
		scanf("%s%d", S, &n);
		len = strlen(S);
		cnt = 0;
		i = 0; j = len-1;
		while(i < j && n > 0)
		{
			if (S[i] == 'A')
			{
				i++; n--;
			}
			else if (S[j] == 'B')
			{
				j--;
			}
			else
			{
				i++, j--; cnt++; n--;
			}
		}
		printf("%d\n", cnt);
	
	}
	
	return 0;
}
