#include <iostream>

using namespace std;

int main(void)
{
	int n;
	const int max_size = 3e5;
	cin >> n;
	int a[max_size];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int v = a[i] & a[j];
			if (v > max)
			{
				max = v;
			}
		}
	}
	cout << max << endl;
	return 0;
}
