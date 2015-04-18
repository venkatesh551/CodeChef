#include <stdio.h>

int main()
{
	int T;
	
	scanf("%d", &T);
	while(T--)
	{
		int i, U, N, ans;
		double D, minCost;

		scanf("%lf%d%d", &D, &U, &N);
		ans = 0;
		minCost = D * U;
		for( i = 1; i <= N; i++)
		{
			double charge, costPerMonth;
			int m, activationCost;
			
			scanf("%d%lf%d", &m, &charge, &activationCost);
			costPerMonth = (double)activationCost / m + charge * U;
			if(costPerMonth < minCost)
			{
				ans  = i;
				minCost = costPerMonth;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
