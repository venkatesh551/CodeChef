#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		string s;
		cin >> s;
		int cost = 0;
		for (auto c: s)
		{
			cost += c - 'a' + 1;
		}
		cout << cost << endl;
	}
	return 0;
}
