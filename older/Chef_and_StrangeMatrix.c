#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100001

struct pos
{	
	int f;
	int s;
};

int compare (const void *a, const void *b)
{
	const struct pos *p = a;
	const struct pos *q = b;
	
	if (p->f == q->f)
	{
		return p->s - q->s;
	}
	else
	{
		return p->f - q->f;
	}
}

int get_RowVal(int *a, int len, int m)
{
	int i, l, f, last, last_cnt, prev, cnt;
	
	last = last_cnt = 2 * MAX_SIZE;
	prev = cnt = 2 * MAX_SIZE;
	l = f = 0;
	
	for (i = len-1; i >= 0; i--)
	{
		if (a[i] == prev)
		{
			cnt++;
		}
		else
		{
			last = prev, last_cnt = cnt;
			prev = a[i], cnt = 1;
		}
		if (a[i] == m)
		{
			l++;
		}
		else
		{
			if (a[i] == 1)
			{
				f++;
			}
			if (a[i] + 1 == last)
			{
				if (a[i] + cnt > last + last_cnt)
					return -1;
			}
			else if (a[i] + cnt > a[i] + 1)
			{
				return -1;
			}
		}
	}
	return m - 1 + l - f;
}

void initialize(int *a, int n, int initval)
{
	int i;
	
	for (i = 1; i <= n; i++)
	{
		a[i] = initval;
	}
}

int main(void)
{
	int i, j, n, m, p,row;
	struct pos c[MAX_SIZE];
	int ans[MAX_SIZE], temp[MAX_SIZE];
	
	scanf("%d%d%d", &n, &m, &p);
	for (i = 0; i < p; ++i)
	{
		scanf("%d%d", &c[i].f, &c[i].s);
	}
	qsort(c, p, sizeof(struct pos), compare);
	initialize(ans, n, m-1);
	if (m > 1)
	{
		temp[0] = c[0].s;
		row = c[0].f;
		j = 1;
		for (i = 1; i < p; ++i)
		{
			if (c[i].f == c[i-1].f)
			{
				temp[j++] = c[i].s;
			}
			else
			{
				ans[row] = get_RowVal(temp, j, m);
				temp[0] = c[i].s;
				j = 1;
				row = c[i].f;
			}
		}
		ans[row] = get_RowVal(temp, j, m);
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
}
