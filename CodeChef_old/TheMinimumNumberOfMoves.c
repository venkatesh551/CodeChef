#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, sum, i, min;

		scanf("%d", &N);
		sum = 0;
		min = 1 << 30;
		for(i = 0; i < N; i++)
		{
			int x;

			scanf("%d", &x);
			sum += x;
			if(min > x)
			{
				min = x;
			}
		}
		printf("%d\n", sum - N * min);
	}
	return 0;
}
