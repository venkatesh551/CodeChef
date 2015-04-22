#include <iostream>

using namespace std;
typedef long long LL;

LL npr(int n, int r)
{
	if (n < r)
	{
		return 0;
	}
	else
	{
		LL result = n;
		for (int i = 1; i < r; ++i)
		{
			result *= (n - i);
		}
		return result;
	}
}

int main()
{

	int T;
	
	cin >> T;
	
	while (T--)
	{
		int n;
		
		cin >> n;
		
		cout << 2 * npr(n, 2) + 5 * npr(n, 3) + 2 * npr(n, 4) << endl;
	}
	return 0;
}
