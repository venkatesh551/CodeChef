#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	string s;
	
	cin >> s;
	int n = s.length();
	int m[26] = {0};
	vector<int> cnt(n);
	int x = s[0] - 'a';
	cnt[0] = 1; m[x] = 1;
	for (int i = 1; i < n; ++i)
	{
		x = s[i] - 'a';
		cnt[i] = cnt[i-1] + (m[x] == 0);
		m[x] = 1;
	}
	
	return 0;
}
