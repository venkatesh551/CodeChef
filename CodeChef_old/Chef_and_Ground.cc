#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n, m;
		
		cin >> n >> m;
		int sum = m;
		for (int i = 0; i < n; ++i)
		{
			int x;
			
			cin >> x;
			sum +=x;
		}
		if (sum % n == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
