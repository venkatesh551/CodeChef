#include <stdio.h>
#include <string.h>

int main()
{
	int T;

	scanf("%d", &T);
	while(T--)
	{
		int  N, K, Answer, A[1000];
		int i;
		char oper[4];

		scanf("%d%d%d", &N, &K, &Answer);
		for(i = 0; i < N; i++)
		{
			scanf("%d",&A[i]);
		}
		scanf("%s",oper);
		if(K > 0)
		{
			if(strcmp(oper, "AND") == 0)
			{
					for(i = 0; i < N && Answer != 0 ; i++)
					{
						Answer &= A[i];
					}
			
			}
			else if(strcmp(oper, "XOR") == 0)
			{
				if((K & 1) == 1)
				{		
					for(i = 0; i < N  ; i++)
					{
						Answer ^= A[i];
					}
				}
			}
			else
			{
					for(i = 0; i < N  ; i++)
					{
						Answer |= A[i];
					}
			
			}
		}
		printf("%d\n", Answer);
	}

	return 0;
}
