#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);

	while(T--)	
	{
		int G;

		scanf("%d", &G);
		while(G--)
		{
			int  I, N, Q, ans;

			scanf("%d%d%d", &I, &N, &Q);

			ans =  N/2;
			if((N & 1) == 1  && I != Q)
			{
				ans++;
			}
			printf("%d\n", ans);
			
		}


	}
	return 0;
}
