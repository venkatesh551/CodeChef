#include <stdio.h>

int is_pal(int n)
{
	int d[10], i, j;
	
	for (i = 0; n > 0; i++)
	{
		d[i] = n % 10;
		n /= 10;
	}
	for (i = i-1, j = 0; i > j; i--, j++)
	{
		if (d[i] != d[j])
		{
			return 0;
		}
	}
	return 1;
}

int is_prime(int n)
{
	int i;
	
	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}	
	return 1;
}

int main(void)
{
	int n, ans;
	
	scanf("%d", &n);
	if (n <= 2)
	{
		ans = 2;
	}
	else
	{
		int i;
		
		if ((n & 1) == 0)
		{
			n++;
		}
		for (i = n; !is_pal(i) || !is_prime(i); i += 2)
			;
		ans = i;
	}
	printf("%d\n", ans);
	return 0;
}
