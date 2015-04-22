#include <stdio.h>

int is_pal(const char *str, int i, int j)
{
	while (i < j)
	{
		if (str[i] != str[j])
		{
			return 0;
		}
	
		i++; j--;
	}
	return 1;
}

int main()
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		char S[5001];
		int i, j, n, ans;
		
		scanf("%d%s", &n, S);
		ans = 0;
		for (i = 0; i < n ; i++)		
		{
			for (j = n-1; j > i; j--)
			{
				if (is_pal(S, i, j))
				{
					i = j; break;
				}
			}
			ans++;
		}
		printf("%d\n", ans);	
	}
	return 0;
}
