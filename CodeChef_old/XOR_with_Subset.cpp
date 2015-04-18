#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n ; ++i)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int ans = k;
		for (int i = n-1; i >= 0; --i)
		{
			ans = max(max(ans^v[i], k^v[i]), ans);	
		}
		cout << ans << endl;
	}
	return 0;
}

