#include <iostream>
#include <algorithm>
#include <vector>

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
		long long sum = 0;
		for (int i = n-1; i >=0; i -= 2)
		{
			sum += v[i];
		}
		cout << sum << endl;
	}
	return 0;
}
