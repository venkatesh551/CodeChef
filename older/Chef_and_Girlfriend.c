#include <stdio.h>

int getMins(char *s)
{
	int x = (s[0]-'0') * 10 + (s[1]-'0');
	int y = (s[3]-'0') * 10 + (s[4]-'0');
	
	return x * 60 + y;
}

int abs(int x)
{
	return x < 0 ? -x : x;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int dst, time1, time2,diff;
		double  ans;
		char t1[6], t2[6];
		
		scanf("%s%s%d", t1, t2, &dst);
		time1 = getMins(t1);
		time2 = getMins(t2);
		diff = time1 - time2;
		if (2 * dst <= diff)
		{
			ans = diff;
		}
		else
		{
			ans = dst + diff/2.0;
		}
		printf("%d.0 %0.1f\n", diff + dst, ans);
	}
	
	return 0;
}
