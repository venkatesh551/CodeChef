#include <stdio.h>

int main()
{
	int T, cnt, i;
	char num[100002];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",num);
		cnt = 0;
		for(i = 0; num[i] != 0; i++){
			if(num[i] != '4' && num[i] != '7')
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}
