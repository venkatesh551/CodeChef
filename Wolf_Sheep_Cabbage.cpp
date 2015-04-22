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
		int n, m;
		cin >> n >> m;
		vector<int> v;
		for (int i = 0; i < m; ++i)
		{
			int x, y;
			cin >> x >> y;
			v.push_back(x);
			v.push_back(y);
		}
		if (m < 2)
		{
			cout << "YES" << endl;
		} 
		else if (m == 2)
		{
			sort(v.begin(), v.end());		
			bool sol_exist = false;
			for (int i = 1; i < 4; ++i)
			{
				if (v[i] == v[i-1])
				{
					sol_exist = true; break;
				}
			}
			cout << (sol_exist ? "YES": "NO") << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
