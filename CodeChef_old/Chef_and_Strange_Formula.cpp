#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long LL;

LL F(LL x, vector<LL> &val, LL m)
{
	LL result = x % m, a, b;
	if (x & 1)
	{
		a = ((x +1)/2)%m;
		b = x%m;
	}
	else
	{
		a = (x/2)%m;
		b = (x+1)%m;
	}
	result = ((result * a)%m * b) %m;
	int ind = min(x, m);
	return (result + val[ind]) %m;
}

int main(void)
{
	int n, m;
	cin >> n >> m;
	vector<LL> val(m+1);
	val[0] = val[1] = 1%m;
	LL fact = 1;
	for (int i = 2; i <= m; ++i)
	{
		fact = (fact * i)%m;
		LL temp = (fact * i)%m;
		val[i] = (val[i-1] + temp)%m;
	}
	LL ans = 0;
	for (int i = 0; i < n; ++i)
	{
		LL cur;
		cin >> cur;
		ans = (ans + F(cur, val,  m)) % m;
	}
	cout << ans << endl;
	return 0;
}
