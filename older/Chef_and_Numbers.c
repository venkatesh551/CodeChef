#include <stdio.h>
#define MAX_SIZE 100001

static int a[MAX_SIZE];

int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}

int main(void)
{
	int i, n, ans = 0;
		
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		int x, low = 0, high = ans - 1;
		
		scanf("%d", &x);
		
		while (low <= high)
		{
			int m = (low + high) / 2;
			
			if (a[m] <= x)
			{
				high = m - 1;
			}
			else
			{
				low  = m + 1;
			}
		}
		a[low] = x;
		ans = max(ans, low + 1);
	}
	printf("%d\n", ans);
	return 0;
}
