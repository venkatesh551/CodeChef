#include<stdio.h>

int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}

int knapSack(int W, int wt[], int val[], int n)
{
	if (n == 0 || W == 0)
	   return 0;

	if (wt[n-1] > W)
		return knapSack(W, wt, val, n-1);
	else 
		return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), 
					knapSack(W, wt, val, n-1)
		          );
}
 
 
int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, k, C[10], W[10], ans;
		
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &C[i], &W[i]);
		}
		ans = knapSack(k, C, W, n);
		printf("%d\n", ans);
	
	}
	return 0;
}
