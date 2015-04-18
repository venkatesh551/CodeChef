#include <iostream>

using namespace std;

int main()
{
	int t;
	const int p = 1e9 + 7;
	cin >> t;
	
	while (t-- > 0)
	{
		string s;
		cin >> s;
		long long result = 1;
		for (size_t i = 0; i < s.length(); ++i)
		{
			if (s[i] == 'l')
			{
				if ((i & 1) == 0)
				{
					result = (result * 2) % p;
				}
				else
				{
					result = (result * 2 - 1) % p;
				}
			}
			else
			{
				if ((i & 1) == 0)
				{
					result = (result * 2 + 2) % p;
				}
				else
				{
					result = (result * 2 + 1) % p;
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
