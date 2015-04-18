#include <stdio.h>

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int n, i, j, flag, x, map[128] = {0};
	char str[101];
	
	scanf("%d%s", &n, str);	
	for (i = 0; str[i]; i++)
	{
		x = str[i];
		map[x]++;
	}
	for  (i = 1; i < n; i++)
	{
		int map2[128] = {0};
		
		scanf("%s", str);
		for (j = 0; str[j]; j++)
		{
			x = str[j];
			map2[x]++;
		}
		for (j = 'a'; j <= 'z'; j++)
		{
			map[j] = min(map[j], map2[j]);
		}
	}
	flag = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		while(map[i]--)
		{
			putchar(i);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("no such string");
	}
	putchar('\n');
	return 0;
}
