#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int size = 100001;
static int P[size], R[size];

void make_sets(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		P[i] = i;
		R[i] = 0;
	}
}

int find(int x)
{
	if (x == P[x])
	{
		return x;
	}
	else
	{
		return find(P[x]);
	}
}

void join(int x, int y)
{
	int px = find(x);
	int py = find(y);

	if (px == py)
	{
		return;
	}
	if (R[px] > R[py])
	{
		P[py] = px;
	}
	else if (R[px] < R[py])
	{
		P[px] = py;
	}
	else
	{
		P[px] = py;
		R[py]++;
	}
}



int main()
{
	int n, p, k;

	cin >> n >> k >> p;
	make_sets(n);
	vector <pair <int, int> > v;
	for (int i = 1; i <=n ; ++i)
	{
		int x;
		cin >> x;
		v.push_back(make_pair(x, i));
	}
	sort(v.begin(), v.end());
	for (int i = 1; i < v.size(); ++i)
	{
		int d = v[i].first - v[i-1].first;
		if (d <= k)
		{
			join(v[i].second, v[i-1].second);
		}
	}
	for (int i = 0; i < p; i++)
	{
		int A, B;
		cin >> A >> B;
		if (find(A) != find(B))
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}	
	}
	return 0;
}

