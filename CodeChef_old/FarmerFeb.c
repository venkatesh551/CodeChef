#include <stdio.h>

int gen_primes(int *p, int max)
{
	int i, j, len;
	
	p[0] = 2; 
	len = 1;
	for (i = 3; i < max; i += 2)
	{
		for (j = 1; j < len && (i % p[j] != 0); j++)
			;
		if (j == len)
		{
			p[len++] = i;
		}
	}
	return len;
}

int bsearch(int *a, int n, int k)
{
	int s = 0, e = n-1;
	
	while (s <= e)
	{
		int m = (s + e)/2;
		
		if (a[m] == k)
		{
			return m + 1;
		}
		else if (a[m] > k)
		{
			e = m - 1;
		}
		else
		{
			s = m + 1;
		}
	}
	return e + 1;
}


int main(void)
{
	int T, p[325], len;
	
	len = gen_primes(p, 2015);
	scanf("%d", &T);
	while (T--)
	{
		int x, y, sum, ind;
		
		scanf("%d%d", &x, &y);
		sum = x + y;
		ind = bsearch(p, len, sum);
		printf("%d\n", p[ind] - sum);
	}
	
	return 0;
}
