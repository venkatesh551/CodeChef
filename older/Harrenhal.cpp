#include <iostream>

using namespace std;

bool is_palindrome(const string &s)
{
	int len = s.length();
	for (int i = 0, j = len-1; i < j; ++i, --j)
	{
		if (s[i] != s[j])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	
	cin >> t;
	while (t-- > 0)
	{
		string s;
		
		cin >> s;
		if (is_palindrome(s))
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "2" << endl;
		}
	}
	return 0;
}

