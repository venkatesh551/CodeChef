#include <stdio.h>
#include <string.h>
static int diff[1000000];
int main()
{
	int T;

	scanf("%d",&T);
	while (T--)
	{
		int n, m, cur, min, max,i;

		scanf("%d%d",&n, &m);
		for (i = 0; i < n; i++)
		{
			diff[i] = 1;
		}
		while (m--)
		{
			int w, x, y, z;

			scanf("%d%d%d%d",&w, &x, &y, &z);
			
			if (w == 2)
			{	
				z = -z;
			}
			diff[x-1] += z;
			diff[y] -= z;
		}
		cur = 0, max = 0, min = 1000000007;
		for (i = 0; i < n; i++)
		{
			cur += diff[i];
			min = cur < min ? cur :min;
			max = cur > max ? cur :max;
		}
		printf("%d\n", max-min);
	}
	return 0;
}
