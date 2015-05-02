#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Point;

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		Point p[3];
		int i, maxDistance, d[3], cnt;

		scanf("%d", &maxDistance);
		for(i = 0; i < 3; i++)
			scanf("%d%d", &p[i].x,&p[i].y);
		maxDistance *= maxDistance;
		d[0] = (p[0].x - p[1].x)*(p[0].x - p[1].x)  + (p[0].y - p[1].y) * (p[0].y - p[1].y);
		d[1] = (p[1].x - p[2].x)*(p[1].x - p[2].x)  + (p[1].y - p[2].y) * (p[1].y - p[2].y);
		d[2] = (p[0].x - p[2].x)*(p[0].x - p[2].x)  + (p[0].y - p[2].y) * (p[0].y - p[2].y);		
		
		cnt = 0;
		for(i = 0; i < 3; i++)
		{
			if(d[i] <= maxDistance)
			{
				cnt++;
			}
		}
		(cnt > 1) ? puts("yes") : puts("no");
		
	}
	return 0;
}
