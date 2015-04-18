#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

class SegmentTree
{
	private:
		vector<int> v;
		int n;
		int build_tree(const vector<int> &a, int node, int s, int e)
		{
			if (s == e)
			{
				v[node] = a[s];
				return a[s];
			}
			else
			{
				int mid = (s + e)/2;
				v[node] = __gcd(build_tree(a, 2 * node + 1, s, mid), 
								build_tree(a, 2 * node + 2, mid + 1, e));
				return v[node];
			}
		};
		int __query(int node, int s, int e, int i, int j)
		{
			if (i > e || j < s)
				return 0;
			else if (s >= i && e <= j)
				return v[node];
			else
			{
				int m = (s + e)/2;
				return __gcd(__query(2 * node + 1, s, m, i, j),
							 __query(2 * node + 2, m + 1, e, i, j)
							);
			}
		}

	public:
		SegmentTree(const vector<int> &a)
		{
			n = a.size();
			int x = (int)(ceil(log2(n)))+1;
          	int size = 2*(int)pow(2,x);
          	v.resize(size);
			build_tree(a, 0, 0, n-1);
		};
		int query(int a, int b)
		{
			if (a > b)
				return 0;
			else
				return __query(0, 0, n-1, a, b);
		}
};

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t-- > 0)
	{
		int n, q;
		scanf("%d%d", &n, &q);
		vector<int> v(n); 
		for (int i = 0; i < n; ++i)		
		{
			scanf("%d", &v[i]);
		}
		SegmentTree tree(v);
		while (q--)
		{
			int L, R;
			scanf("%d%d", &L, &R);
			L--, R--;
			printf("%d\n", __gcd(tree.query(0, L-1), tree.query(R+1, n-1)));
		}
	}
	return 0;
}
