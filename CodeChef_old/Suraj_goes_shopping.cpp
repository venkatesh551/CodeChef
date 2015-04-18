#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		int i, cost = 0;
		sort(v.begin(), v.end());
		for (i = n-1; i > 0; i -= 4)
		{
			cost += v[i] + v[i-1];
		}
		if (i == 0)
			cost += v[0];
		cout << cost << endl;
	}
	return 0;
}
