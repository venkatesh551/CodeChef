#include <stdio.h>
#define MAXSIZE 100


int findSum(int a[][MAXSIZE], int n)
{
	int i, j;
	
	for(i = n-2; i >= 0; i--)
	{
		for(j = 0 ; j <= i; j++) 
		{
			int x = a[i+1][j];
			int y = a[i+1][j+1];
			a[i][j] += x > y ? x : y;		
		}
	}
	return a[0][0];
}


int main()
{

	int T;
	int a[MAXSIZE][MAXSIZE];
	
	scanf("%d", &T);
	while(T--)
	{
		int n, i, j;

		scanf("%d", &n);
		for(i = 0; i < n; i++)
		{	
			for(j = 0; j <= i; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		printf("%d\n", findSum(a, n));
	}
	return 0;
}
