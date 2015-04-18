#include <stdio.h>

int countNoOfSetBits(int num)
{
	int c ;

	for(c = 0; num; c++){
		num &= num - 1;
	}
	return c;
}

int main()
{
	int T, p, rem, ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&p);
		rem  = p % 2048;
		ans = p / 2048 + countNoOfSetBits(rem);
		printf("%d\n",ans);
	}

	return 0;
}
