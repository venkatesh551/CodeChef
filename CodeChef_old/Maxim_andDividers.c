#include <stdio.h>
#include <math.h>

int is_over_lucky(int x)
{
	while (x)
	{
		int d = x % 10;
		x /= 10;
		if (d == 4 || d == 7)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{

	int T;

	scanf("%d", &T);
	while (T--)
	{
		int n, limit, i, ans;

		scanf("%d",&n);
		limit = sqrt(n);
		ans  = is_over_lucky(n);
		for (i = 2; i < limit; i++)
		{
			if (n % i == 0)
			{
				ans += is_over_lucky(i) + is_over_lucky(n/i);
			}
		}
		if (limit * limit == n)
		{
			ans += is_over_lucky(limit);
		}
		else if (n % i == 0)
		{
			ans += is_over_lucky(i) + is_over_lucky(n/i);
		}
		printf("%d\n", ans);
	}
	return 0;
}
