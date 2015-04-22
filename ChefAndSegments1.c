#include <stdio.h>
#define MAX_N 100001

int main(int argc, char *argv[])
{
	int N, prod[MAX_N], i, T;
	
	scanf("%d", &N);
	prod[0] = 1;
	for (i = 1; i <= N; i++)
	{
		int x;
		
		scanf("%d", &x);
		prod[i] = prod[i-1] * x;
	}
	scanf("%d", &T);
	while (T--)
	{
		int L, R, M, ans;
		
		scanf("%d%d%d", &L, &R, &M);
		ans = (prod[R]/prod[L-1]) % M;
		printf("%d\n", ans);
	}
	return 0;
}

