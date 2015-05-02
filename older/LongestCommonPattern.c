#include <stdio.h>
#define MAX_SIZE 10001

static char A[MAX_SIZE], B[MAX_SIZE];
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, x, ans = 0, map[128] = {0};
		
		scanf("%s%s", A, B);
		for (i = 0; A[i]; ++i)
		{
			x = A[i];
			map[x]++;
		}
		for (i = 0; B[i]; ++i)
		{
			x = B[i];
			if (map[x])
			{
				map[x]--;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	
	return 0;
}
