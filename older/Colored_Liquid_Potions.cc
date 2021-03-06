#include <iostream>

using namespace std;

int get_max(int n)
{
	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		
		cin >> x;
		if (mx < x)
		{
			mx = x;
		}
	}
	return mx;
}

int main(void)
{
	int T;
	
	cin >> T;
	while (T-- > 0)
	{
		int r, g, b, m;
		cin >> r >> g >> b >> m;
		int x = get_max(r);
		int y = get_max(g);
		int z = get_max(b);
		while (m-- > 0)
		{
			if (x > y && x > z)
			{
				x /= 2;
			}
			else if (y > z)
			{
				y /= 2;
			}
			else
			{
				z /= 2;
			}
		}
		cout << max(max(x, y), z) << endl;
	}
	return 0;
}

