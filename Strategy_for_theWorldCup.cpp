/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Strategy_for_theWorldCup.cpp

* Purpose :

* Creation Date : 15-02-2015

* Last Modified : Monday 16 February 2015 01:10:04 AM IST

* Created By : Venkatesh

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long LL;
const int p = 1e9 + 7;
const int MAX_SIZE = 301;
int C[MAX_SIZE][MAX_SIZE];

void ncr()
{
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		C[i][0] =  C[i][i] = 1;
		for (int j = 1; j < i; ++j)
		{
			C[i][j] = (C[i-1][j] + C[i-1][j-1])%p;
		}	
	}
}

int main()
{
	ncr();
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int R, B, L;
		cin >> R >> B >> L;
		int ways = 0;
		for (int y = 0; y <= B && 6 * y <= R; ++y)
		{
			int x = (R - 6*y)/4;
			if (4*x + 6*y == R)	
			{
				for (int w = 0; w <= L; ++w)
				{
					if (x+y+w <= B)
					{
						LL cur = C[B][x];
						(cur *= C[B-x][y]) %= p;
						(cur *= C[B-x-y][w]) %= p;
						ways = (ways+cur) %p;
					}
				}
			}
		}
		cout << ways << endl;
	}	
	return 0;
}
