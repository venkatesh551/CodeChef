#include <iostream>

using namespace std;

int get_max(int n)
{
	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		
		cin >> x;
		if (mx < x)
		{
			mx = x;
		}
	}
	return mx;
}

int get_max_ind(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return 0;
	}
	else if (b > c)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
int main(void)
{
	int T;
	
	cin >> T;
	while (T-- > 0)
	{
		int r, g, b, m, max_val[3];
		cin >> r >> g >> b >> m;
		max_val[0] = get_max(r);
		max_val[1] = get_max(g);
		max_val[2] = get_max(b);
		
		int ind, ans = 1e9+ 7;
		while (m-- > 0)
		{
			ind = get_max_ind(max_val[0], max_val[1], max_val[2]);
			ans = min(ans, max_val[ind]);
			max_val[ind] /= 2;
			++max_val[(ind+1)%3];
			++max_val[(ind+2)%3];
		}
		ind = get_max_ind(max_val[0], max_val[1], max_val[2]);
		cout << min(ans, max_val[ind]) << endl;
	}
	return 0;
}
