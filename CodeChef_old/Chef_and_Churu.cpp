#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int, int> pii;
typedef long long LL;
const int MAX = 1e5 + 7;
LL t[30*MAX];

void build(int a[], int v, int tl, int tr)
{
	if (tl == tr)
	{
		t[v] = a[tl];
	}
	else
	{
		int tm = (tl + tr)/2;
		build(a, v*2, tl, tm);
		build(a, v*2+1, tm+1, tr);
		t[v] = t[v*2] + t[v*2+1];
	}
}

LL sum(int v, int tl, int tr, int l, int r)
{
	if (l > r)
		return 0;
	if (l == tl && r == tr)
		return t[v];
	int tm = (tl + tr)/2;
	return sum(v*2, tl, tm, l, min(r, tm)) + 
		   sum(v*2+1, tm+1, tr, max(l, tm+1), r);	
}

void update(int v, int tl, int tr, int pos, int new_val)
{
	if (tl == tr)
		t[v] = new_val;
	else
	{
		int tm = (tl + tr)/2;
		if (pos <= tm)
			update(v*2, tl, tm, pos, new_val);
		else
			update(v*2+1, tm+1, tr, pos, new_val);
		t[v] = t[v*2] + t[v*2+1];
	}
}


int main(void)
{
	int n;
	cin >> n;
	int A[MAX];
	for (int i = 1; i <= n; ++i)
	{
		cin >> A[i];
	}
	vector<pii> v(n+1);
	for (int i = 1; i <= n; ++i)
	{
		int x, y;
		cin >> x >> y;
		v[i] = make_pair(x, y);
	}
	int Q;
	cin >> Q;
	build(A, 1, 1, n);
	while (Q--)
	{
		int type, L, R;
		cin >> type >> L >> R;
		if (type == 1)		
		{
			update(1, 1, n, L, R);	
		}
		else
		{
			LL result = 0;
			for (int i = L; i <= R; ++i)
			{
				result += sum(1, 1, n, v[i].first, v[i].second);	
			}
			cout << result << endl;
		}
	}
	return 0;
}
