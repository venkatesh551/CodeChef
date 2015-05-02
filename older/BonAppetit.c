#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100001
struct customer
{
	int s;
	int f;
	int p;
} A[MAX_SIZE];

int compare (const void * a, const void * b)
{
	const struct customer *x = a;
	const struct customer *y = b;
	
	if (x->p == y->p)
	{	
		return x->f - y->f;
	}
	else
	{
		return x->p - y->p;
	}
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, n, k, cnt, ans, f_time;
		
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; ++i)
		{
			scanf("%d%d%d", &A[i].s, &A[i].f, &A[i].p);
		}
		qsort(A, n, sizeof(struct customer), compare);
		cnt = 1;
		ans = 0;
		f_time = A[0].f;
		for (i = 1; i < n ; ++i)
		{
			if (A[i].p > A[i-1].p)
			{
				ans += cnt;
				cnt = 1;	
				f_time = A[i].f;	
			}
			else
			{
				if (f_time <= A[i].s)
				{
					cnt++;
					f_time = A[i].f;
				}
			}
		}
		ans += cnt;
		if (n > 0)
			printf("%d\n", ans);
		else
			puts("0");
	}
			
	return 0;
}

