#include <iostream>
#include <vector>

using namespace std;

void apply_round(vector<int> &v, int a)
{
	int n = v.size();
	
	for (int i = a; i < n; ++i)
	{	
		v[i] = max(v[i], i - a);
	}
	for (int i = a-1; i >= 0; --i)
	{
		v[i] = max(v[i], a - i);
	}
}

int main(void)
{
	int t;
	
	cin >> t;
	while (t-- > 0)
	{
		int n, m, x;
		cin >> n >> m >> x;
		int a = x, b = x;
		for (int i = 0; i < m; ++i)
		{
			cin >> x;
			if (a > x)
				a = x;
			if (b < x)
				b = x;
		}
		vector<int> v(n, 0);
		apply_round(v, a);
		apply_round(v, b);
		for (int i = 0; i < n; ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
