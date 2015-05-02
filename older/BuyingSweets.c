#include <stdio.h>

int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int N, X, min, sum, ans, i;
		
		scanf("%d%d", &N, &X);
		min = 1000;
		sum = 0;
		for (i = 0; i < N; i++)
		{
			int temp;
	
			scanf("%d", &temp);
			sum += temp;
			if (temp < min)
			{
				min = temp;
			}
		}
		ans = sum/X;
		if (ans == (sum-min)/X)
		{
			ans = -1;
		}
		printf("%d\n", ans);
	}
	return 0;
}
