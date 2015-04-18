#include <stdio.h>

int main()
{

	unsigned T;

	scanf("%u", &T);
	while(T--)
	{
		unsigned N;
		
		scanf("%u", &N);
		printf("%u\n", (N/2)+1);
	}

	return 0;
}
