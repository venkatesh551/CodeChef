#include <stdio.h>

#define MAX_SIZE 20000
#define MOD 1000000007

int gcd(int a, int b)
{
	while (b > 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int get_minProduct(int *A, int n)
{
	int i, j, ans;
	
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; ++j)
		{
			int d = gcd(A[i], A[j]);
			A[i] /= d;
			A[j] /= d;
		}
	}
	ans = 1;
	for (i = 0; i < n; i++)
	{
		ans = ((long long)ans * A[i]) % MOD;
	}
	return ans;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int n, i, A[MAX_SIZE];
		
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &A[i]);
		}
		printf("%d\n", get_minProduct(A, n));
	}
	
	return 0;
}
