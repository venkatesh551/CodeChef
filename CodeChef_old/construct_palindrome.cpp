#include <iostream>

using namespace std;

bool remove_char(const string &s, int ind)
{
	int n = s.length();
	for (int i = 0, j = n-1; i < j ; ++i, --j)
	{
		if (i == ind)
			++i;
		if (j == ind)
			--j;
		if (s[i] != s[j])
			return false;
	}
	return true;
}

bool palindrome_exist(const string &s)
{
	int n = s.length();
	int i, j;
	for (i = 0, j = n-1; i < j && s[i] == s[j]; ++i, --j)
		;
	return (i >= j) || remove_char(s, i) || remove_char(s, j);
}

int main()
{
	int t;
	
	cin >> t;
	string s;
	while (t-- > 0)
	{
		cin >> s;
		if (palindrome_exist(s))
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
