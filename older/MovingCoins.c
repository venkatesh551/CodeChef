#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, K, temp = 0, grp_size;
		int moves, coins[1001] = {0} , i;

		scanf("%d%d", &N, &K);	
		for(i = 0; i < N; i++)
		{
			scanf("%d", &temp);
			coins[temp] = 1;
		}
		grp_size = 0;
		moves = 0;
		for(i = temp; i > 0; i--)
		{
			if(coins[i])
			{
				grp_size++;
			}
			else
			{
				moves += 1 + (grp_size - 1)/K;
			}
		}	
		printf("%d\n", moves);
	}
	return 0;
}
