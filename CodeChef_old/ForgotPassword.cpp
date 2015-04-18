#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int T;
	
	cin >> T;
	
	while (T--)
	{
		int n, i, j;
		map <char, char> m;
		string s;
		
		cin >> n;
		for (i = 0; i < n; ++i)
		{
			char c, p;
			
			cin >> c >> p;
			m[c] = p;
		}
		cin >> s;
		int len = s.size();
		int indx = -1;
		for (i = 0; i < len; ++i)
		{
			if (m.count(s[i]))
			{
				s[i] = m[s[i]];
			}
			if (s[i] == '.')
			{
				indx = i;
			}
		}
		for (i = 0; i < len && s[i] == '0'; ++i)
			;
		if (indx != -1)
		{
			for (j = len-1; j > indx && s[j] == '0'; j--)
				;
			if (s[j] == '.')
				j = j-1;
		}
		else
		{
			j = len-1;
		}
		if (i == len || i > j)
		{
			cout << "0";
		}
		else
		{
			for (int k = i; k <= j; ++k)
			{
				cout << s[k] ;
			}
		}
		cout << endl;
		m.clear();
	}
	return 0;
}
