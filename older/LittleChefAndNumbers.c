#include <stdio.h>

typedef long long LL;
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, a, b;
		LL ans;
		
		scanf("%d", &n);
		a = b = 0;
		for (i = 0; i < n; ++i)
		{
			int x;
			
			scanf("%d", &x);
			if (x >= 2)
			{
				a++;
				if (x == 2)
					b++;
			}
		} 
		ans = ((LL)a * (a-1) - (LL)b * (b-1))/2;
		printf("%lld\n", ans);
	}
	
	return 0;
}
