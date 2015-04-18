#include <iostream>
#include <vector>

using namespace std;
typedef long long LL;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n, k;
		cin >> n >> k;
		int m = 0;
		for (int i = 0; i < k; ++i)
		{
			int x;
			cin >> x;
			m = max(m, x);
		}
		int ans = 1;
		for (int i = 1; i <= n; ++i)
		{
			ans = ((LL)ans * i)%m;
		}
		cout << ans << endl;
	}
	return 0;
}
