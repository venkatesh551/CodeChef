#include <iostream>
#include <vector>

using namespace std;

int get_count(const string &s, char fst, char snd)
{
	int n = s.length(), cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if ((i & 1) == 0)
		{
			if (s[i] != fst)	
				cnt++;
		}
		else
		{
			if (s[i] != snd)
				cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int t;
	string s;
	cin >> t;
	while (t-- > 0)
	{
		cin >> s;
		cout << min(get_count(s, '-', '+'), get_count(s, '+', '-')) << endl;
	}
	return 0;
}
