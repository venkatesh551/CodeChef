#include <stdio.h>
#include <string.h>

static char wrd[10001], S[10001];

int get_Frequency(int n, int m)
{
	int i, j, cnt = 0;
	
	for (i = 0; i < n - m + 1; ++i)
	{
		for (j = 0; j < m && wrd[j] == S[i+j] ; j++)
			;
		if (j == m)
		{
			cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int Q, n, m;
		
		scanf("%s%d", S, &Q);
		n = strlen(S);
		while (Q--)
		{
			scanf("%s", wrd);
			m = strlen(wrd);
			printf("%d\n", get_Frequency(n, m));
		}	
	}
	
	return 0;
}
