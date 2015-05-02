#include <stdio.h>
#include <vector>

using std::vector;

int main()
{
	static const unsigned int maxn = 10000000;
	unsigned int n = 0,m = 0;scanf("%d%d",&n,&m);
	vector<unsigned long long> frac(maxn+1,1);
	for(unsigned int i = 1;i <= maxn;++i) frac[i] = (frac[i-1]*i)%m;
	unsigned long long p = 0,ans = 0;
	for(unsigned int i = 0;i < n;++i)
	{
		scanf("%lld",&p);
		unsigned long long product = p%m,a = 0,b = 0;
		if(p&1) { a = ((p + 1)/2)%m;b = p%m; }
		else { a =  (p/2)%m;b = (p+1)%m; }
		product = ((product*a)%m*b)%m;
		ans += product;ans %= m;
		//printf("%u %u\n",(unsigned int)(ans),(unsigned int)product);

		if(p >= m - 1) ans += (m - 1);
		else ans += (frac[(p+1)%m] + m - 1);
		ans %= m;
		//printf("%u\n",(unsigned int)(ans));
	}
	printf("%u\n",(unsigned int)(ans));
	return 0;
}
