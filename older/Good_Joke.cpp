#include <iostream>
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
		int ans = n;
		while (n-- > 0)
		{
			int x, y;
			cin >> x >> y;
			ans ^= n;
		}
		cout << ans << endl;
	}

	return 0;
}
