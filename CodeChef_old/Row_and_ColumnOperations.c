#include <stdio.h>

static int R[314160] = {0} , C[314160] = {0};

int main()
{

	int N, Q;
	int i, max_r, max_c ;

	scanf("%d%d", &N, &Q);
	while(Q--)
	{
		char oper[7];
		int RC, X;

		scanf("%s%d%d", oper, &RC, &X);
		if(oper[0] == 'R')
		{
			R[RC] += X;
		}
		else
		{
			C[RC] += X;
		}
	}
	max_r = max_c = 0;
	for(i = 1; i <= N; i++)
	{
		if(max_r < R[i])
		{
			max_r = R[i];
		}
		
		if(max_c < C[i])
		{
			max_c = C[i];
		}
	}
	printf("%d\n", max_r + max_c);
	return 0;
}
