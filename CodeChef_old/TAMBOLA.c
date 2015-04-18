#include <stdio.h>

void read(int *A, int n)
{
	int i, x;
	
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		A[x] = 1;
	}
}

int get_cnt(int *A)
{
	int i, cnt = 0;
	
	for (i = 0; i < 1001; ++i)
	{
		if (A[i])
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, p, q, x, A[1001] = {0}, B[1001] = {0};
		
		scanf("%d", &n);
		read(A, n);
		read(B, n);
		do{
			scanf("%d", &x);
			A[x] = 0;
			B[x] = 0;
		}while(x > 0);
		p = get_cnt(A);
		q = get_cnt(B);
		if (p == 0)
		{
			if (p == q)
			{
				puts("MIKE HARVEY");
			}
			else
			{
				puts("MIKE");
			}
		}
		else if (q == 0)
		{
			puts("HARVEY");
		}
		else
		{
			puts("0");
		}
	}
	
	return 0;
}
