/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : FitSquares_in_Triangle.cpp

* Purpose :

* Creation Date : 15-02-2015

* Last Modified : Sunday 15 February 2015 10:00:21 PM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int B;
		cin >> B;
		int n = B/2;
		cout << (n-1)*n/2 << endl;
	}
	return 0;
}
