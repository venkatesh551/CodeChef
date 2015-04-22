#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, A, B, C;
		int ans, max_d, temp;
		
		scanf("%d%d%d", &A, &B, &C);
		ans = 0; max_d = A * 100 + B;
		for (i = 1; i < 10000; ++i)
		{
			if (C > B)		
			{
				if (A > 0)
				{
					A--;
					B += 100;
				}
				else
				{
					break;
				}
			}
			B -= C;
			swap(&A, &B);
			temp =  A * 100 + B;
			if (max_d < temp)
			{
				max_d = temp;
				ans = i;
			}
		}
		printf("%d\n", ans);
	
	}
	
	return 0;
}
