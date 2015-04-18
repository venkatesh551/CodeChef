#include <stdio.h>
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, n, x, max = 0, temp;
		
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &x);
			temp = x + i;
			if (max < temp)
			{
				max = temp;
			}
		}
		printf("%d\n", max);
	}
	
	return 0;
}
