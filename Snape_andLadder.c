#include <stdio.h>
#include <math.h>

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int B, L;
		
		scanf("%d%d", &B, &L);
		B *= B;
		L *= L;
		printf("%lf %lf\n", sqrt(L - B), sqrt(B + L));
	}
	
	return 0;
}
