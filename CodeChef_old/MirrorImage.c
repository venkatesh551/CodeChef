#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
	int len, i, j;
	
	len = strlen(s);
	for (i = 0, j = len-1; i < j; i++, j--)
	{
		char c  = s[i];
		s[i] = s[j];
		s[j] = c;
	}

}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, m;
		char row[1005];
		
		scanf("%d%d", &n, &m);
		while (n-- > 0)
		{
			scanf("%s", row);
			reverse(row);
			puts(row);
		}	
	
	}
	
	return 0;
}
