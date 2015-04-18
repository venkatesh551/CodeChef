#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int t;
	
	cin >> t;
	while (t--)
	{
		int x, y;
		
		cin >> x >> y;
		
		bool ans = false;
		if ((x <= 0) && ((x & 1) == 0) && (y >= x && y <= -x))
			ans = true;
		else if ((x > 0) && ((x & 1) == 1) && (y >= 1-x && y <= 1+x))
			ans = true;
		else if ((y & 1) == 0)
		{
			if (y <= 0)
			{
				if (x <= 0 && y <= x)
				{
					ans = true;
				}
				else if (x > 0 && x <= abs(y) + 1)
				{
					ans = true;
				}
			}
			else
			{
				if (x <= 0 && abs(x) <= y)
				{
					ans = true;
				}
				else if (x > 0 && x < y)
				{
					ans = true;
				}
			}
		}
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO"  << endl;
	}
	return 0;
}
