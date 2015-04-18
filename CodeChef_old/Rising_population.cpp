#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n-- > 0)
	{
		string s, t;
		cin >> s >> t;
		int m[26] = {0};
		for (size_t i = 0; i < s.size(); ++i)
		{
			m[s[i]-'a']++;
		}
		for (size_t i = 0; i < t.size(); ++i)
		{
			m[t[i]-'a']--;
		}
		bool ans = true;
		for (size_t i = 0; i < 26; ++i)		
		{
			if (m[i] != 0)
			{
				ans = false;
				break;
			}
		}
		if (ans)
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
