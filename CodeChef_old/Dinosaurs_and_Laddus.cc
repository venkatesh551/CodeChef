#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;
typedef pair<int, int> pii;
typedef long long LL;

LL get_min_units(priority_queue<pii, vector<pii>, greater<pii> > &pq, 
		vector <pii> &v)
{
	int len = v.size(), last_ind = 0;
	LL ans = 0; 
	while (!pq.empty())
	{
		pii rt = pq.top();
		int cur_ind = rt.first;
		int cur_cnt = rt.second;
		while (last_ind < len && cur_cnt > 0)
		{
			LL temp = abs(cur_ind - v[last_ind].first);
			if (v[last_ind].second > cur_cnt)
			{
				ans += cur_cnt * temp;
				v[last_ind].second -= cur_cnt;
				cur_cnt = 0;
			}
			else
			{
				ans += v[last_ind].second * temp;
				cur_cnt -= v[last_ind].second;
				last_ind++;
			}
		}
		pq.pop();
	}
	return ans;
}


int main(void)
{
	int t;
	
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		priority_queue<pii, vector<pii>, greater<pii> > pq;
		vector <pii> v;
		for (int i = 0; i < n; ++i)
		{
			int x;
			
			cin >> x;
			if (x < 0)
			{
				pq.push(make_pair(i, -x));
			}
			else if (x > 0)
			{
				v.push_back(make_pair(i, x));
			}
		}
		cout << get_min_units(pq, v) << endl;
	}
	return 0;
}
