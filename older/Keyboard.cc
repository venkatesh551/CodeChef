#include <iostream>

using namespace std;

int get_position(string &s, char c)
{
	int i, n = s.length();
	
	for (i = 0; i < n && s[i] != c; ++i)
		;
	return i;
}

int main(void)
{
	string r, s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char c;
	cin >> c >> r;
	int n = r.length();
	for (int i = 0; i < n; ++i)
	{
		int idx = get_position(s, r[i]);
		if (c == 'L')
		{
			cout << s[idx+1];
		}
		else
		{
			cout << s[idx-1];
		}
	}
	cout << endl;
	return 0;
}
