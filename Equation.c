#include <stdio.h>

int min(int x, int y)
{
	return x < y ? x : y;
}

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, A, B, C;
		int i, j;
		long long ans;
		
		scanf("%d%d%d%d", &N, &A, &B, &C);
		ans  = 0;
		for(i = 0; i <= min(A, N) ;i++)
		{
			for(j = 0; j <= min(B, N); j++)
			{
				int sum = i + j;

				ans += min(N - sum, C) + 1;
			}
		}
		printf("%lld\n", ans);

	}
	return 0;
}
