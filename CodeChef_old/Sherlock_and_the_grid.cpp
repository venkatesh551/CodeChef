#include <cstdio>

int main(void)
{
	int t;
	const int Max = 1e3;
	char s[Max][Max];
		
	scanf("%d", &t);
	while (t-- > 0)
	{
		int n;		
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)	
		{
			scanf("%s", s[i]);
		}
		int ans = 0;
		int r[Max] = {0}, c[Max] = {0};
		for (int i = n-1; i >= 0; --i)
		{
			for (int j = n-1; j >= 0; --j)
			{
				if (s[i][j] == '#')
				{
					r[i] = c[j] = 1;
				}
				else if (c[j] == 0 && r[i] == 0)
				{
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
