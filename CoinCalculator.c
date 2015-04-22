#include <stdio.h>

int main(void)
{

	int x, a, b, c;

	scanf("%d", &x);
	a = x/5;
	x %= 5;
	b = x/3;
	x %= 3;
	c = x/2;
	x %= 2;
	printf("%d %d %d %d\n", a, b, c, x);
	return 0;
}
