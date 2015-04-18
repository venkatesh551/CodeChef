#include <iostream>
#include <cmath>

using namespace std;
typedef long long LL;

int main()
{
	LL n, m;
	
	cin >> n >> m;
	LL mid = 2 * n + 1;
	LL mid_cnt = n;

	
	while (m--)
	{
		LL q;
		
		cin >> q;
		LL distance_from_mid = abs(mid-q);
		LL ans = mid_cnt - distance_from_mid;
		
		if (ans < 0)
		{
			ans = 0;
		}
		cout << ans << endl;
	}


	return 0;
}
