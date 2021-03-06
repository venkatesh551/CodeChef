#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];			
		}
		sort(v.begin(), v.end());
		int ans = 1, cnt = 1;
		for (int i = 1; i < n; ++i)
		{
			if (v[i] == v[i-1])
			{
				++cnt;
			}
			else
			{
				ans = max(ans, cnt);
				cnt = 1;
			}
		}
		ans = max(ans, cnt);
		cout << n-ans << endl;
	}
	return 0;
}
