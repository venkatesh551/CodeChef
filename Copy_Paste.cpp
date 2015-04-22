#include <iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;
	while (T--)
	{
		const int max_size = 1e5 + 7;
		int n, a[max_size] = {0};
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if (a[x] == 0)
			{
				cnt++;
				a[x] = 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
