#include <stdio.h>

int main()
{
	int T, len, i, j;
	char S[1001];
	scanf("%d",&T);
	while(T--)
	{
		char freq[128] = {0};
		scanf("%s",S);
		for(len = 0; S[len] != 0; len++)
			;
		for(i = 0, j = len-1; i < j; i++, j--){
			freq[S[i]]++;
			freq[S[j]]--;
		}
		for(i = 'a'; i <= 'z' && freq[i] == 0  ; i++)
			;
		if(freq[i])
			puts("NO");
		else
			puts("YES");
	}

	return 0;
}
