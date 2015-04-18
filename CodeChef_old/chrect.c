#include <stdio.h>

int main()
{

	int T, N, M, K;

	scanf("%d", &T);
	while(T--)
	{
		int ans;
		scanf("%d%d%d", &N, &M, &K);
	
		if(N == 1 && M > 2)
			ans = K;
		else if(M == 1 && N > 2)
			ans = K;
		else if(N > 1 && M > 1)
			ans = K / 2 + (K % 2 != 0);
		else
			ans  = 0;
		printf("%d\n", ans);

	}

	return 0;
}
