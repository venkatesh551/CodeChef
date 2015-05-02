#include <stdio.h>

#define MAX_SIZE 100001
int main(void)
{
	int n, m, i, j;
	char S[MAX_SIZE];
	int d[10] = {0}, p[MAX_SIZE];
	
	scanf("%d%d%s", &n, &m, S);
	for (i = 0; S[i] != 0; ++i)
	{	
		int b1, b2, x;
		
		x = S[i] - '0';
		b1 = b2 = 0;
		for (j = x - 1; j >= 0; j--)
		{
			b1 += d[j] * (x - j);
		}
		for (j = x + 1; j < 10; j++)
		{
			b2 += d[j] * (j - x);
		}
		p[i] = b1 + b2;
		d[x]++;
	}	
	while (m--)
	{
		int q;
		
		scanf("%d", &q);
		printf("%d\n", p[q-1]);
	}
	return 0;
}
