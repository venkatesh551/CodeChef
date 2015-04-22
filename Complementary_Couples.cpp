#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long LL;

int main(void)
{
	LL n, k;
	cin >> n >> k;
	vector<LL> h(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	int cnt = 0;
	for (int i = 0, j = n-1; i < j; )
	{
		LL sum = h[i] + h[j];
		if (sum == k)
		{
			++cnt; ++i; --j;
		}
		else if (sum < k)
		{
			++i;
		}
		else
		{
			--j;	
		}
	}
	if (cnt > 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}

