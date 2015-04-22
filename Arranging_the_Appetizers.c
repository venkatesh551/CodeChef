#include <stdio.h>

#define MAXSIZE (1 << 16) + 1
int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		char str[MAXSIZE];
		char mark[MAXSIZE] = {0};
		int i, k, limit;

		scanf("%d%s", &k, str);
		limit = (1 << k) - 1;

		for(i = 1; i < limit; i++)
		{
			int j, pos = 0;
			int andPos = 1;
			char temp;
			if(mark[i] == 0)
			{
				for(j = k-1; j >= 0; j--)
				{
					if(i & andPos)
					{
						pos += (1 << j);
					}
					andPos <<= 1;
				}
				temp = str[i];
				str[i] = str[pos];
				str[pos] = temp;
				mark[i] = mark[pos] = 1;
			}
		}
		puts(str);
	}
	return 0;
}
