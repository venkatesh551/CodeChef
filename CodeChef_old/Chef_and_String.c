#include <stdio.h>

static char S[100001];

int main(void)
{
	int i, c, h, e, f;
	
	scanf("%s", S);
	c = h = e = f = 0;
	for (i = 0; S[i] ; ++i)
	{
		if (S[i] == 'C')
		{
			c++;
		}
		else if (S[i] == 'H' && c > h)
		{
			h++;
		}
		else if (S[i] == 'E' && h > e)
		{
			e++;
		}
		else if (S[i] == 'F' && e > f)
		{
			f++;
		}
	}
	printf("%d\n", f);
	return 0;
}
