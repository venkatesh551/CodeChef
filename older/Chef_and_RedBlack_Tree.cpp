#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;
typedef pair<int, int> pii;

int log_2(int n)
{
	int pwr = 0;
	while (n >>= 1)
	{
		++pwr;
	}
	return pwr;
}

void add_cnt(pii &ans, int p, int m)
{
	if ((m & 1) == 0)
	{
		ans.first += p-p/2;
		ans.second += p/2;
	}
	else
	{
		ans.first +=p/2;
		ans.second += p-p/2;
	}
}
pii node_count(int x, int y)
{
	int m = log_2(x);
	int n = log_2(y);
	int p = 0, q = 0;
	
	while (x != y)
	{
		if (x > y)
		{
			x >>= 1; ++p;
		}
		else
		{
			y >>= 1; ++q;
		}
	}
	pii ans(0, 0);
	add_cnt(ans, p, m);
	add_cnt(ans, q, n);
	int rt = log_2(x);
	add_cnt(ans, 1, rt);
	return ans;
}

int main(void)
{
	int Q;
	
	cin >> Q;
	string s;
	int color = 0;//Black
	while (Q-- > 0)
	{
		cin >> s;
		int x, y;
		if (s == "Qi")
		{
			color = 1-color;
		}
		else
		{
			cin >> x >> y;
			pii ans = node_count(x, y);
			if (color == 0)
			{
				if (s == "Qb")
					cout << ans.first << endl;
				else
					cout << ans.second << endl;
			}
			else
			{
				if (s == "Qr")
					cout << ans.first << endl;
				else
					cout << ans.second << endl;
			}
		}
	}
	return 0;
}
