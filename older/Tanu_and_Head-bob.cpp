#include <iostream>

using namespace std;

int main(void)
{
	int t;
	
	cin >> t;
	while (t-- > 0)
	{
		int n;
		
		cin >> n;
		string s;
		cin >> s;
		size_t i;
		for (i = 0; i < s.length() && (s[i] == 'N'); ++i)
			;
		if (i == s.length()) // all are N's
		{
			cout << "NOT SURE" << endl;
		}
		else if (s[i] == 'I')
		{
			cout << "INDIAN" << endl;
		}
		else
		{
			cout << "NOT INDIAN" << endl;
		}
	}
	return 0;
}
