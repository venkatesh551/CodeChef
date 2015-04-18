#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		unsigned n;

		scanf("%u", &n);		
		if(n & 1) // Odd Number
			puts("BOB");
		else
			puts("ALICE");
	}
	return 0;
}
