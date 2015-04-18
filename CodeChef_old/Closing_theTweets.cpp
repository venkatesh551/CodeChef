/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Closing_theTweets.cpp

* Purpose :

* Creation Date : 23-02-2015

* Last Modified : Monday 23 February 2015 07:10:45 PM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long LL;

int main()
{
	const int MAX_SIZE = 1007;
	int A[MAX_SIZE] = {0};
	int N, K;
	cin >> N >> K;
	string action;
	int tweet_num, cnt = 0;
	for (int i = 0; i < K; ++i)
	{
		cin >> action;
		if (action  == "CLICK")
		{
			cin >> tweet_num;
			if (A[tweet_num] == 0)
				cnt++;
			else
				cnt--;
			A[tweet_num] = 1 - A[tweet_num];
			cout << cnt << endl;
		}
		else
		{
			cout << 0 << endl;
			cnt = 0;
			memset(A, 0, sizeof(A));
		}
	}
	return 0;
}
