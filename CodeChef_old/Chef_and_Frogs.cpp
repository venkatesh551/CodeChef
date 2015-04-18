#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n, p, k;

	cin >> n >> k >> p;
	vector <pair <int, int> > v;
	for (int i = 1; i <= n ; ++i)
	{
		int x;
		cin >> x;
		v.push_back(make_pair(x, i));
	}
	sort(v.begin(), v.end());
	const int size = 100001;
	int grp[size];
	int cnt = 1;
	grp[v[0].second] = cnt;
	//cout << "Size = " << v.size() << endl;
	for (size_t i = 1; i < v.size(); ++i)
	{
		int d = v[i].first - v[i-1].first;
		if (d > k)
		{
			cnt++;	
		}
		grp[v[i].second] = cnt;
		
	}
	for (int i = 0; i < p; i++)
	{
		int A, B;
		cin >> A >> B;
		if (grp[A] != grp[B])
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
