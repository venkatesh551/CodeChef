#include <stdio.h>

int main(void)
{
	int d, m, i, ans, A[] = {0, 37, 42, 29, 34, 51, 49};
	
	scanf("%d%d", &d, &m);
	ans = d-1;
	for (i = 0; i < m; i++)
	{
		ans += A[i];
	}
	printf("%d\n", 1 + ans % 6);
	return 0;
}
