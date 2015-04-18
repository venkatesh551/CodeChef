#include <iostream>
#include <vector>

using namespace std;
typedef long long LL;

int main(void)
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		LL n, s, i;
		cin >> n >> s;
		LL diff = n*(n+1)/2 - s;
		for (i = 1; i <= n; ++i)
		{
			LL sum = i*(i+1)/2;
			if (sum > diff)
			{
				break;
			}
		}
		cout << i-1 << endl;
	}
	return 0;
}
