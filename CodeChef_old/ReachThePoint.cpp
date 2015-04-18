#include <iostream>
#include <algorithm>
#include <cmath>  

using namespace std;

int main()
{
	int T;
	
	cin >> T;
	
	while (T--)
	{
		int x, y;
		
		cin >> x >> y;
		x = abs(x);
		y = abs(y);
		
		int ans;
		if (y == 0)
		{
			ans = x * 2 + (x & 1);
		}
		else
		{
			int a = min(x, y);
			int b = max(x, y);
			int d = b - a;
			int p = d/2;
			int q = d - p;
			if (x < y)
				ans = a * 2 + p * 3 + q;
			else
				ans =  a * 2 + p + q * 3;
		}
		cout << ans << endl;
	}	
	return 0;
}

