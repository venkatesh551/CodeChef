#include <stdio.h>

struct point{
	int x;
	int y;
};

int triangle_area(struct point *p)
{
	int a = p[0].x * (p[1].y - p[2].y) +
			p[1].x * (p[2].y - p[0].y) +
			p[2].x * (p[0].y - p[1].y);
	return a < 0 ? -a : a;
}

int main()
{

	int N, i, min, max, min_ind, max_ind;

	scanf("%d",&N);
	min = 1 << 30;
	max = min_ind = max_ind = 0;;
	for (i = 1; i <= N; i++)
	{
		struct point p[3];
		int j, area;
	
		for (j = 0; j < 3; j++)
		{
			scanf("%d%d",&p[j].x, &p[j].y);
		}
		area = triangle_area(p);
		if (area <= min)
		{
			min = area; min_ind = i;
		}
		if (area >= max)
		{
			max = area; max_ind = i;
		}
	}
	printf("%d %d\n", min_ind, max_ind);
	return 0;
}
