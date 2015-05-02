#include <stdio.h>

int main()
{

	char alpha[27];
	int N, i;

	scanf("%d", &N);

	for(i = 0; i < 26; i++)
		alpha[i] = 'z' - i;
	alpha[i] = 0;
	while(N--)
	{
		int K, x, y;		
		
		scanf("%d", &K);
		x = K % 25;
		y =  K / 25;
		if(x != 0)
		{
			printf("%s", alpha+25-x);
		}
		for(i = y; i > 0 ; i--)
		{
			printf("%s", alpha);
		}
		printf("\n");
	}

	return 0;
}
