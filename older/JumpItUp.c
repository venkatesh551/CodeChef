#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int main(void)
{
	int l, m, n, x, y;
	
	scanf("%d%d%d", &l, &m, &n);
	x = m - l - 1;
	y = n - m - 1;
	printf("%d\n", max(x, y));

	return 0;
}

