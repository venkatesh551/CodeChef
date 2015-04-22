#include <stdio.h>
#include <string.h>
static char S[1000001];

int main(void)
{
	int i, len, x, d;
	long long ans;
	
	//scanf("%s", S);
	len = strlen(S);
	ans = 0;
	for (i = 0; i < len; i++)
	{
		S[i] -= '0';
		if (S[i] == 0 || S[i] == 8)
		{
			ans++;
		}
	}
	for (i = 0; i + 1 < len; i++)
	{
		if (S[i] != 0)
		{
			x = S[i] * 10 + S[i+1];
			if (x % 8 == 0)
			{
				ans++;
			}
		}
	}
	d = 0;
	for (i = 0; i+2 < len; i++)
	{
		if (S[i] != 0)
		{
			d++;
		}
		x = 100 * S[i] + 10 * S[i+1] + S[i+2];
		if (x % 8 == 0)
		{
			ans += d;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
