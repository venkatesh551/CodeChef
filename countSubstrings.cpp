#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while (T--)
	{
		int n;
		string s;
		cin >> n >> s;
		long long cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			cnt += s[i] == '1';
		}
		cout << (cnt) * (cnt + 1)/2 << endl;
	}
	return 0;
}
