#include <stdio.h>
#include <string.h>

int main()
{
	int T;

	scanf("%d",&T);
	while (T--)
	{
		int K, i, j, len, flag;
		char str[101];

		scanf("%d%s",&K, str);
		len = strlen(str);
		flag = 0;
		if (len == 1)
		{
			if (str[0] == '?')
			{
				str[0] = '0'; 
			}
		}
		else if(K == 2 && (len & 1) == 1)
		{
			flag = 1;
		}
		else
		{
			for (i = 0; i < len && flag == 0; i++)
			{
				int prev = (len + i + 1) % len;
				int next = (len + i - 1) % len;

				if (str[i] == '?')
				{
					for (j = 0; j < K; j++)
					{
						char c = j + '0' ;
						if (c != str[prev] && c != str[next])
						{
							str[i] = c; break;
						}
					}
					if (j == K)
					{
						flag = 1;
					}
				}
				else if(str[i] == str[prev] || str[i] == str[next])
				{
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{
			puts(str);
		}
		else
		{
			puts("NO");
		}
	}
	return 0;
}
