#include <stdio.h>
#include <math.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int i, N, ans;

		scanf("%d", &N);
		ans = N-1;
		for(i = sqrt(N); i > 1; i--)
		{
			int q = N / i;
			
			if(i * q == N)
			{	
				ans = q - i;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
