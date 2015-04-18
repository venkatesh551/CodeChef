#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 100000

typedef struct{
	int x;
	int y;
}Point;


int compare (const void *a, const void *b)
{
	
	const Point *p1 = a;
	const Point *p2 = b;
	
	if(p1->x < p2->x)
		return -1;
	else if(p1->x > p2->x)
		return 1;
	else if(p1->y < p2->y)
		return 1;
	else if(p1->y > p2->y)
		return -1;
	else
		return 0;
	
}


int main()
{

	int T;
	Point *p = (Point *) malloc(sizeof(Point) * MAXSIZE);
	scanf("%d", &T);
	
	while(T--)
	{
		int n, i;
		double ans;

		scanf("%d", &n);
		for(i = 0; i < n; i++)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			p[i].x = x;
			p[i].y = y;
		}
		qsort(p, n, sizeof(Point), compare);
		ans  = 0.0;
		for(i = 0; i < n-1; i++)
		{
			int a = p[i].x - p[i+1].x;
			int b = p[i].y - p[i+1].y;
			ans += sqrt(a*a + b*b);
		}
		printf("%0.2f\n", ans);
	}
	free(p);
	return 0;
}
