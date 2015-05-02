#include <stdio.h>

#define MAX_N 1000001
static int F[MAX_N];

int count_setBits(int n)
{
	int c;
	
	for (c = 0; n > 0; c++)
	{
		n &= (n-1);
	}
	return c;
}

int main(int argc, char *argv[])
{
	int T, i;
	
	scanf("%d", &T);
	F[1] = 1; F[2] = 2;
	for (i = 3; i < MAX_N ; i++)
	{
		F[i] = (F[i-1] + F[i-2]) % 1000000007;
	}
	
	while (T--)
	{
		int N, G, c;
		
		scanf("%d%d", &N, &G);
			
		c = count_setBits(F[N]);
		if(c == G)
		{
			puts("CORRECT");
		}
		else
		{
			puts("INCORRECT");
		}
	
	}
	return 0;
}
