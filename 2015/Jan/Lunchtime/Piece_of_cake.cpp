#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		string s;
		cin >> s;
		int cnt[26] = {0};
		for (auto c: s)
		{
			++cnt[c-'a'];
		}
		int sum = 0, max_cnt = 0;
		for (int i = 0; i < 26; ++i)
		{
			sum += cnt[i];
			max_cnt = max(max_cnt, cnt[i]);
		}
		sum -= max_cnt;
		if (sum == max_cnt)
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
