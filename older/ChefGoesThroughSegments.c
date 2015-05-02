#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001
static char out_str[MAX_SIZE];

int min(int x, int y)
{
	return x < y ? x : y;
}

void concat(char *str, int cnt)
{
	while (cnt > 0)
	{
		cnt--;
		strcat(out_str, str);
	}
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, ans, px, py;
		
		scanf("%d%d%d", &n, &px, &py);
		out_str[0] = ans = 0 ;
		for (i = 1; i < n; ++i)
		{
			int dx, dy, cx, cy;
			
			scanf("%d%d", &cx, &cy);
			dx = cx - px;
			dy = cy - py;
			if (dx < 0 && dy < 0)
			{
				ans += -(dx + dy);
				concat("L-", -dx);
				concat("R-", -dy);
			}
			else if (dx <= 0 && dy > 0)
			{
				ans += dy - dx;
				concat("L-", -dx);
				concat("R+", dy);
			}
			else if(dx > 0 && dy <= 0)
			{
				ans += dx - dy;
				concat("L+", dx);
				concat("R-", -dy);
			}
			else if(dx > 0 && dy > 0)
			{
				int d = py - px;
				ans += dx + dy;
				if (dx < d)
				{
					concat("L+", dx);
					concat("R+", dy);
				}
				else
				{
					int temp;
					
					concat("L+", d-1);
					dx -= d-1;
					temp = min(dx, dy);
					concat("R+L+", temp);
					dx -= temp;
					dy -= temp;
					concat("R+", dy);
				}					
						
			}			
			px = cx;
			py = cy;
		}
		printf("%d\n", ans);
		puts(out_str);
	}
	
	return 0;
}
