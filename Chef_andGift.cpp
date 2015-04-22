#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	
	cin >> T;
	while (T--)
	{
		int n, k;

		cin >> n >> k;
		int cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if ((x & 1) == 0)
			{
				cnt++;
			}
		}
		if (k == 0 && cnt == n)
		{
			cout << "NO" << endl;
		}
		else if (cnt >= k)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
