#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int ans = 1, last = 1;
	for (int i = 1; i < n; ++i)
	{
		if (v[i] < v[i-1])
		{
			if (last == 1)
			{
				ans += 2;
			}
			else
			{
				ans += 1;
			}
			last = 1;
		}
		else if (v[i] > v[i-1])
		{
			last++;
			ans += last;
		}
		else
		{
			ans += 1;
			last = 1;
		}
	}
	cout << ans << endl;
	return 0;
}

