#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

	char P[1000001];
	int T, i, j, ans, curLen;
	
	scanf("%d", &T);
	while(T--)
	{		
		scanf("%s", P);
		curLen = ans = 0;
		for(i = 0; P[i] ; i++)
		{
			if(P[i] == '.')
			{
				int	noOfDots = 1;
				for(j = i+1;  P[j] == '.'; j++)
					noOfDots++;
				i = j;
				if(curLen < noOfDots)
				{
					ans++;
					curLen = noOfDots;	
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
