#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		vector<pii> v(n);
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			cin >> x >> y;
			v[i] = make_pair(x, y);
		}
		sort(v.begin(), v.end());
		vector<pii> r;
		r.push_back(v[0]);
		for (int i = 1; i < n; ++i)
		{
			int j = r.size() - 1;
			if (v[i].first <= r[j].second)
			{
				r[j] = make_pair(max(r[j].first, v[i].first), 
								min(r[j].second, v[i].second));
			}
			else
			{
				r.push_back(v[i]);
			}
		}
		cout << r.size() << endl;
	}
	return 0;
}
