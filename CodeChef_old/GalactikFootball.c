#include <stdio.h>

static int P[100001], R[100001], min[100001], node_cnt[100001];

void make_sets(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		P[i] = i;
		R[i] = 0;
	}
}

int find(int x)
{
	if (x == P[x])
	{
		return x;
	}
	else
	{
		return find(P[x]);
	}
}

void join(int x, int y)
{
	int px = find(x);
	int py = find(y);

	if (px == py)
	{
		return;
	}
	if (R[px] > R[py])
	{
		P[py] = px;
	}
	else if (R[px] < R[py])
	{
		P[px] = py;
	}
	else
	{
		P[px] = py;
		R[py]++;
	}
}


int main()
{
	int i, N, M, set_cnt, sum, smallest, ans;

	scanf("%d%d",&N,&M);
	make_sets(N);
	for (i = 0; i < M; i++)
	{
		int A, B;
	
		scanf("%d%d",&A,&B);	
		join(A, B);
	}
	for (i = 1; i <= N; i++)
	{
		min[i] = 10001;
	}

	for (i = 1; i <= N; i++)
	{
		int cost, p;

		scanf("%d",&cost);
		p = find(i);
		node_cnt[p]++;
		if (cost >= 0)
			min[p] = min[p] < cost ? min[p] : cost;
	}
	set_cnt = 0, sum = 0, ans = 0, smallest = 10001;
	for (i = 1; i <= N; i++)
	{
		if (node_cnt[i])
		{
			set_cnt++;
			sum  += min[i];
			smallest = smallest < min[i] ? smallest : min[i];
			if (min[i] == 10001)
			{
				ans = -1;break;
			}
		}
	}

	if(set_cnt == 1)
		printf("%d\n",0);
	else if(ans == -1)
		printf("%d\n",ans);
	else
		printf("%d\n", (set_cnt - 2) * smallest + sum);

	return 0;
}
