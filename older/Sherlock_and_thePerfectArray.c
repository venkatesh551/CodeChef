#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, x, ans, n, k, zero_cnt = 0, max = 0, s_max = 0, cnt = 0;
		
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &x);
			if (x == 0)
			{
				zero_cnt++;
			}
			if (x <= k)
			{
				if (x >= max)
				{
					s_max = max;
					max = x;
				}
				else if (x > s_max)
				{
					s_max = x;
				}
				cnt++;
			}
		}
		ans  = 0;
		if (zero_cnt > 1)
		{
			ans  = -1;
		}
		else if (cnt > 1)
		{
			if (s_max == 0 || s_max == 1)
			{
				ans = -1;
			}
			else
			{
				long long p = s_max * max;
				
				while (p <= k)
				{
					p *= max;
					ans++;
				}
				ans += cnt-1;
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
