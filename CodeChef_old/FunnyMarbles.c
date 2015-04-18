#include <stdio.h>

#define MAX_SIZE 1000000
static int A[MAX_SIZE];

int main(void)
{
	int N, Q, i;
	
	scanf("%d%d", &N, &Q);
	for (i = 0; i < N; ++i)
	{
		scanf("%d", &A[i]);
	}
	for (i = 0; i < Q; ++i)
	{
		char c;
		int pos, val;
		
		c = getchar();
		scanf("%c%d%d", &c, &pos, &val);
		if (c == 'S')
		{
			
		}
		else if (c == 'G')
		{
			
		}
		else
		{
			
		}
	}
	return 0;
}
