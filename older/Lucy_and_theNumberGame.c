#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10001
struct player
{
	char name[6];
	int val;
};

int cmp(const void *a, const void *b)
{
	return ((struct player *)a)->val - ((struct player *)b)->val;
}

static struct player p[MAX_SIZE];

const char * find_uniq(int n)
{
	int i, j;
	
	for (i = 0; i < n; i = j)
	{
		for (j = i+1; j < n && p[i].val == p[j].val; j++)
				;
		if (i+1 == j)
		{
			return p[i].name;
		}
	}
	return NULL;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i;
		const char *ans;
		
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%s%d", p[i].name, &p[i].val);
		}
		qsort(p, n, sizeof(struct player), cmp);
		ans = find_uniq(n);
		if (ans  ==  NULL)
		{
			ans = "Nobody wins.";
		}
		puts(ans);
	}
	
	return 0;
}
