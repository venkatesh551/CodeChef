#include <stdio.h>

int main()
{

	int T;

	scanf("%d", &T);

	while(T--)
	{
		int  i, k, nodes;

		scanf("%d", &k);
		nodes = 1;
		for(i = 0;  i < k; i++)
		{
			int x;
	
			scanf("%d", &x);
			nodes -= x;
			if(nodes < 0)
				break;
			nodes += nodes;	
			
		}
		if(nodes)
			puts("No");
	11.17s).17s)	else
			puts("Yes");

	}
	return 0;
}
