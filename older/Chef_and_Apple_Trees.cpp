#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		map<int, int> m;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			m[x]++;
		}
		cout << m.size() << endl;
	}
	return 0;
}
