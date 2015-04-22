#include <stdio.h>
#define MAX_SIZE 20002
static char A[MAX_SIZE], B[MAX_SIZE];

int min(int x, int y)
{
	return x < y ? x : y;
}

void swap(int **p, int **q)
{
	int *temp = *p;
	*p = *q;
	*q = temp;
}

int find_noOf_sevens(int *p, int *q)
{
	int i, x, cnt_7 = 0;
	
	for (i = 0; i < 2; i++)
	{
		while (p[7] > 0)
		{
			if (q[5] > 0)
			{
				x = min(q[5], p[7]);
				p[7] -= x;
				q[5] -= x;
				cnt_7 += x;
			}
			else if (q[0] > 0)
			{
				x = min(q[0], p[7]);
				p[7] -= x;
				q[0] -= x;
				cnt_7 += x;
			}
			else if (q[4] > 0)
			{
				x = min(q[4], p[7]);
				p[7] -= x;
				q[4] -= x;
				cnt_7 += x;
			}
			else if (q[7] > 0)
			{
				x = min(q[7], p[7]);
				p[7] -= x;
				q[7] -= x;
				cnt_7 += x;
			}
			else
			{
				p[7] = 0;
			}
		}
		swap(&p, &q);
	}
	return cnt_7;
}

int find_noOf_fours(int *p, int *q)
{
	int i, cnt_4 = 0;
	
	for (i = 0; i < 2; i++)
	{
		while (p[4] > 0)
		{
			if (q[0] > 0)
			{
				int x = min(q[0], p[4]);
				p[4] -= x;
				q[0] -= x;
				cnt_4 += x;
			}
			else if (q[4] > 0)
			{
				int x = min(q[4], p[4]);
				p[4] -= x;
				q[4] -= x;
				cnt_4 += x;
			}
			else
			{
				p[4] = 0;
			}
		}
		swap(&p, &q);
	}
	return cnt_4;
}

int main(int argc, char *argv[])
{
	
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, c[10] = {0}, d[10] = {0}, cnt_7, cnt_4;
	
		scanf("%s%s", A, B);
		for (i = 0; A[i] != 0; i++)
		{
			c[A[i]-'0']++;
			d[B[i]-'0']++;
		}
		for (i = 1; i < 4; i++)
		{
			c[0] += c[i];
			d[0] += d[i];
		}
		c[5] += c[6];
		d[5] += d[6];
		
		cnt_7 = find_noOf_sevens(c, d);
		cnt_4 = find_noOf_fours(c, d);
		
		for (i = 0; i < cnt_7; i++)
			putchar('7');
		for (i = 0; i < cnt_4; i++)
			putchar('4');
		putchar('\n');
	}
	
	return 0;
}
