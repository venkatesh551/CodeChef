#include <stdio.h>

int main()
{

	int n, ans = 0;

	scanf("%d", &n);

	while(n--)
	{
		int i, p[3], q[3];
		int x, y, z;
		for(i = 0; i < 3; i++)
			scanf("%d%d", &p[i], &q[i]);
		x = (p[1]-p[0]) *(p[1]-p[0]) + (q[1]-q[0]) * (q[1]-q[0]);
		y = (p[2]-p[1]) *(p[2]-p[1]) + (q[2]-q[1]) * (q[2]-q[1]);
		z = (p[2]-p[0]) *(p[2]-p[0]) + (q[2]-q[0]) * (q[2]-q[0]);
		
		if((x  + y  ==  z) ||  (x + z == y) || (y + z == x))
			ans++;
	}	
	printf("%d\n", ans);
	return 0;
}

