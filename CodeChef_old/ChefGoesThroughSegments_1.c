#include <stdio.h>

struct point
{
	int x;
	int y;
}p[1001];

int min(int x, int y)
{
	return x < y ? x : y;
}

int abs(int x)
{
	return x < 0 ? -x : x;
}

void print(char *str, int cnt)
{
	while (cnt > 0)
	{
		cnt--;
		printf("%s", str);
	}
}
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, ans;
				
		scanf("%d%d%d", &n, &p[0].x, &p[0].y);
		ans = 0;
		for (i = 1; i < n; ++i)
		{
			scanf("%d%d", &p[i].x, &p[i].y);
			ans += abs(p[i].x - p[i-1].x);
			ans += abs(p[i].y - p[i-1].y);
		}
		printf("%d\n", ans);
		
		for (i = 1; i < n; ++i)
		{
			int dx, dy;
			
			dx = p[i].x - p[i-1].x;
			dy = p[i].y - p[i-1].y;
			if (dx < 0 && dy < 0)
			{
				print("L-", -dx);
				print("R-", -dy);
			}
			else if (dx <= 0 && dy > 0)
			{
				print("L-", -dx);
				print("R+", dy);
			}
			else if(dx > 0 && dy <= 0)
			{
				print("L+", dx);
				print("R-", -dy);
			}
			else if(dx > 0 && dy > 0)
			{
				int d = p[i-1].y - p[i-1].x;
				if (dx < d)
				{
					print("L+", dx);
					print("R+", dy);
				}
				else
				{					
					print("L+", d-1);
					dx -= d-1;
					print("R+L+", dx);
					dy -= dx;
					print("R+", dy);
				}					
						
			}			
		}
		printf("\n");
	}
	
	return 0;
}
