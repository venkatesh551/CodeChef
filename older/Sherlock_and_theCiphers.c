#include <stdio.h>

#define MAX_SIZE 100001
static char S[MAX_SIZE];
static int A[MAX_SIZE];

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i;
		
		scanf("%d%s", &n, S);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &A[i]);
		}
		for (i = 0; i < n; i++)
		{
			char temp = S[i];
			S[i] = S[A[i]-1];
			S[A[i]-1] = temp;
		}
		puts(S);
	}
	
	return 0;
}

