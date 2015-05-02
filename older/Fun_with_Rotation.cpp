#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)	
	{
		cin >> v[i];
	}
	int x = 0;
	for (int i = 0; i < m; ++i)
	{
		char c;
		int cnt;
		
		cin >> c >> cnt;
		if (c == 'R')
		{
			int ind = (x + cnt - 1) % n;
			cout  << v[ind] << endl;
		}
		else if (c == 'C')
		{
			x = (x + cnt - n) % n;
		}
		else
		{
			x = (x + n - cnt) % n;
		}
		if (x < 0)
		{
			x = (x + n) % n;
		}
	}
	return 0;
}
