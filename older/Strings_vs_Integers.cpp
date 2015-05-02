#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);
	int t = atoi(s.c_str());
	while (t-- > 0)
	{
		getline(cin, s);
		for (auto i = 0; i < s.length(); ++i)
		{
			if (!isdigit(s[i]))
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
