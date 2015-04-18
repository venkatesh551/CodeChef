#include <stdio.h>

int abs_val(int x)
{
	return x < 0 ? -x : x ;
}

int main(void)
{

	int n, x, sum, temp, i, ans;

	scanf("%d%d", &n, &x);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		sum += temp;
	}
	sum = abs_val(sum);
	ans = sum / x  + (0 != sum % x);
	printf("%d\n", ans);
	return 0;
}
