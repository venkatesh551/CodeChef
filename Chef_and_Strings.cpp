#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
const int MAX_SIZE = 1e6 + 9;
map<char, vector<int> > mp;

int bsearch(const vector<int> &v, int key)
{
	int low = 0, n = v.size(), high = n-1;
	while (low <= high)
	{
		int mid = (low + high)/2;
		if (v[mid] == key)
		{
			return mid;
		}
		else if (v[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low == n)
	{
		return n-1;
	}
	else if (high == -1)
	{
		return 0;
	}
	else
	{
		return low;
	}
}

int get_count(char a, char b, int L, int R)
{
	const vector<int> &seq1 = mp[a];
	const vector<int> &seq2 = mp[b];
	int x = bsearch(seq1, L);
	int y = bsearch(seq1, R);
	int p = bsearch(seq2, L);
	int q = bsearch(seq2, R);
	int ans = 0;
	for (int i = x; i <= y; ++i)
	{
		for(int j = p; j <= q; ++j)
		{
			if (seq1[i] <= seq2[j])
			{
				ans += q-j+1;
				break;
			}
		}
	}
	return ans;	
}

int main()
{
	char s[MAX_SIZE];
	scanf("%s", s);
	for (int i = 0; s[i] !=0; ++i)
	{
		mp[s[i]].push_back(i);
	}
	int q;
	scanf("%d", &q);
	while (q-- > 0)
	{
		char a, b;
		int L, R;
		cin >> a >> b >> L >> R;
		printf("%d\n", get_count(a, b, L-1, R-1));
	}
	return 0;
}
