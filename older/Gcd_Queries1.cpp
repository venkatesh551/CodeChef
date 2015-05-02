#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t-- > 0)
	{
		int n, q;
		scanf("%d%d", &n, &q);
		vector<int>v(n+1, 0);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d", &v[i]);
		}
		vector<int> pre(n+2, 0), suf(n+2, 0);
		for (int i = 1; i <= n; ++i)
		{
			pre[i] = __gcd(pre[i-1], v[i]);
		}
		for (int i = n; i > 0; --i)
		{
			suf[i] = __gcd(suf[i+1], v[i]);
		}
		while (q-- > 0)
		{
			int L, R;
			scanf("%d%d", &L, &R);
			printf("%d\n", __gcd(pre[L-1], suf[R+1]));
		}
	}
	return 0;
}
