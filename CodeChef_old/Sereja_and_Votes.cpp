#include <iostream>

using namespace std;
int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		int sum = 0, cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			sum += x;
			cnt += x > 0;
		}
		sum -= 100;
		if (sum >= 0 && sum < cnt)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
