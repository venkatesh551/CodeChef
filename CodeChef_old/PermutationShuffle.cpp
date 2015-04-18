#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;


bool check(vector <pair<int, int> > &p, int s, int e)
{	
	for (int i = s; i <= e; ++i)
	{
		if (p[i].first <= e && p[i].first >= s )
		{
			p[i].second = 1;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool check_notInIntervals(vector <pair<int, int> > &p)
{
	int len = p.size();
	for (int i = 0; i < len; ++i)
	{
		if (p[i].second == 0 && i != p[i].first)
		{
			//cout << i  << " "<< p[i].first << " " << p[i].second <<endl;
			return false;
		}
	}
	return true;
}
int main()
{
	int T;
	
	cin >> T;
	while (T-- > 0)
	{
		int n, m;
		cin >> n >> m;
		vector <pair <int, int> > p;
		p.push_back(make_pair(0, 0));
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			p.push_back(make_pair(x, 0));
		}
		vector <pair <int, int> > v;
		for (int i = 0; i < m; ++i)
		{
			int x, y;
			
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}
		sort(v.begin(), v.end());
		int s = v[0].first;
		int e = v[0].second;
		bool flag = true;
		for (size_t i = 1; i < v.size(); ++i)
		{
			if (v[i].first <= e)
			{
				e = max(v[i].second, e);
			}
			else
			{
				if (false == check(p, s, e))
				{
					flag = false;
					break;
				}
				s = v[i].first;
				e = v[i].second;
			}
		}
		if (flag && true == check(p, s, e) && true == check_notInIntervals(p))
		{
			cout << "Possible" << endl;
		}
		else
		{
			cout << "Impossible" << endl;
		}
	}
	return 0;	
}
