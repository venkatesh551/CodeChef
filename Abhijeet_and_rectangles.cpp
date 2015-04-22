#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> pii;

bool compare_pii(const pii &lhs, const pii &rhs)
{
	return (lhs.first * lhs.second) < (rhs.first * rhs.second);
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<pii> v(n);
		for (int i = 0; i < n; ++i)
		{
			LL x, y;
			cin >> x >> y;
			v[i] = make_pair(x, y);
		}
		sort(v.begin(), v.end(), compare_pii);
		LL area = v[n-1].first * v[n-1].second;
		pii rect = make_pair(v[n-1].first, v[n-1].second);
		for (int i = n-2; i >= m; --i)
		{
			rect.first = min(v[i].first, rect.first);
			rect.second = min(v[i].second, rect.second);
			area = rect.first * rect.second;
		}
		cout << area << endl;
	}
	return 0;
}



