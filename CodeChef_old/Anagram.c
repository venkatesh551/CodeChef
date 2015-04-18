#include <stdio.h>
#define MAX_SIZE 30
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		char A[MAX_SIZE], B[MAX_SIZE], map[128] = {0};
		int i, x;
		
		scanf("%s%s", A, B);
		for (i = 0; A[i] ; ++i)	
		{
			x = A[i];
			map[x]++;
		}
		for (i = 0; B[i]; ++i)
		{
			x = B[i];
			map[x]--;
		}
		for (i = 0; i < 128 && map[i] == 0; ++i)
			;
		if (i == 128)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	
	return 0;
}
