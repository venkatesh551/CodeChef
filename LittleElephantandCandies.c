#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int i, N, C;

		scanf("%d%d", &N, &C);

		for(i = 0; i < N; i++)
		{
			int x;

			scanf("%d", &x);
			C -= x;
		}
		(C < 0) ? puts("No"): puts("Yes");

	}
	return 0;
}
