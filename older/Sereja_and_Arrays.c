#include <stdio.h>

const int p = 1000000007;
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, k, i, ans;
		
		scanf("%d%d", &n, &k);
		ans  = 1;
		for (i = 0; i < n-k+1; ++i)	
		{
			int len = n - i - k + 1;
			
			if (len >= k)
			{
				ans = (ans + len - k + 1) % p;
			}
			if (i >= k)
			{
				ans = (ans + i - k + 1) % p;
			}
			ans = (ans + 1) % p;
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
