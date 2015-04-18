#include <iostream>
#include <map>

using namespace std;

int distinct_char_count(const string &s)
{
	map<char, int> m;
	
	for (size_t i = 0; i < s.length(); ++i)
	{
		m[s[i]] = 1;
	}
	return m.size();
}

int main(void)
{
	int n;
	cin >> n;
	string s;
	while (n-- > 0)
	{
		cin >> s;
		cout << distinct_char_count(s) << endl;
	}	
	return 0;
}
