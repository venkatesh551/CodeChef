/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Lucky_Four.cpp

* Purpose :

* Creation Date : 22-02-2015

* Last Modified : Sunday 22 February 2015 11:39:17 AM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long LL;

int main()
{
	int t;
	cin >> t;
	string s;
	while (t-- > 0)
	{
		cin >> s;
		int n = s.length();
		int cnt  = 0;
		for (int i = 0; i < n; ++i)
		{
			cnt += (s[i] == '4');
		}
		cout << cnt << endl;
	}
	return 0;
}
