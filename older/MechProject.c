#include <stdio.h>

int gcd(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, g, n, minSize, minRipeFactor, Rcut, Acut;
		
		scanf("%d%d%d", &n, &minSize, &minRipeFactor);
		Rcut = 0;
		for (i = 0; i < n; ++i)
		{
			int s, f;
			
			scanf("%d%d", &s, &f);
			if (s > minSize || f > minRipeFactor)
			{
				Rcut++;
			}
		}
		scanf("%d", &Acut);
		g = gcd(Acut, Rcut);
		if(g > 1)
		{
			Acut /= g;
			Rcut /= g;
		}
		printf("%d/%d\n", Rcut, Acut);
	}
	
	return 0;
}
