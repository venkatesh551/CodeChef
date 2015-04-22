#include <stdio.h>

int isSubsetPossible(int *notes, int n, int m)
{
	int i, j, limit;

	limit =  (1 << n);
	for(i = 1; i < limit; i++)
	{
		int sum = 0;
		for(j = 0; j < n; j++)
		{
			if(i & (1 << j))
				sum += notes[j];
		}
		if(sum == m)
			return 1;
	}
	return 0;
}

int main()
{

	int T;

	scanf("%d", &T);
	while(T--)
	{
		int i, n, m, notes[20];

		scanf("%d%d", &n, &m);
		for(i = 0; i < n; i++)
			scanf("%d", &notes[i]);
		if(isSubsetPossible(notes, n, m))
			puts("Yes");
		else
			puts("No");

	}
	return 0;
}
