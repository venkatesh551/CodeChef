#include <stdio.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int a, b, min;
		
		scanf("%d%d", &a, &b);
		min = a > b ? a : b;
		printf("%d %d\n", min, a + b);
	
	}
	
	return 0;
}
