#include <stdio.h>

int main()
{
	int R, C, mat[101][101];
	int i, j, ans;

	scanf("%d%d",&R, &C);
	for(i = 1; i <= R; i++)
	{
		int min = 100000000;
		for(j = 1; j <= C; j++)
		{
			scanf("%d", &mat[i][j]);
			if(mat[i][j] < min)
			{
				min = mat[i][j];
			}
		}
		mat[i][0] = min;
	}
	for(i = 1; i <= C; i++)
	{
		int max = 0;
		for(j = 1; j <= R; j++)
		{
			if(mat[j][i] > max)
			{
				max = mat[j][i];
			}
		}
		mat[0][i] = max;
	}
	ans = 0;
	for(i = 1; i <= R; i++)
	{
		for(j = 1; j <= C; j++)
		{
			if(mat[i][0] == mat[0][j])
			{
				ans = mat[i][0];
			}
		}
	}
	if(ans > 0)
	{
		printf("%d\n", ans);
	}
	else
	{
		puts("GUESS");
	}

	return 0;
}
