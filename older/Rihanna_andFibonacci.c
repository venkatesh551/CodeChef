#include <stdio.h>

typedef long long LL;

#define MS  2
#define MOD 1000000007

void mat_mul(LL ab[MS][MS], LL a[MS][MS], LL b[MS][MS])
{
	int i, j, k;
	LL temp[2][2];
	
	for(i = 0; i < 2;i++) 
		for(j = 0; j< 2;j++)
		{
			LL x = 0;
			for(k = 0; k < 2;k++)
				x += (1ll * a[i][k] * b[k][j]);
			temp[i][j] = x % MOD;
		}

	for(i = 0; i < 2;i++) 
		for(j = 0;j < 2;j++) 
			ab[i][j] = temp[i][j];
}

LL mat_pow(int a, int b, int n)
{
	int i, j;
	LL tpow[2][2] = { {1, 1} ,
					   {1, 0} 
					 };
	LL R[2][2];
	
	for(i = 0;i < 2;i++) 
		for(j = 0;j < 2;j++) 
			R[i][j] = (i==j);
	while(n)
	{
		if(n&1) 
			mat_mul(R,R,tpow);
		if((n >>=1)) 
			mat_mul(tpow,tpow,tpow);
	}
	return (R[0][0]*b + R[0][1] * a) % MOD;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int a, b, n;
		LL ans;
		
		scanf("%d%d%d", &a, &b, &n);
		if (n == 1)
		{
			ans = a;
		}
		else if(n == 2)
		{
			ans = b;
		}
		else
		{
			ans = mat_pow(a, b, n-2);
		}
		printf("%lld\n", ans);
	}
	
	return 0;
}
