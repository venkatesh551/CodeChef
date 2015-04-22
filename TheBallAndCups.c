#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int N, C, Q;

		scanf("%d%d%d", &N, &C, &Q);
		while(Q--)
		{
			int L, R;

			scanf("%d%d", &L, &R);
			if(C >= L && C <= R)
			{
				C = R + L - C; 
			}
		}
		printf("%d\n", C);
	}
	return 0;
}
