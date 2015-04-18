#include <iostream>

using namespace std;

int m[10][3] =
{ 	{1, 4, 5}, 
	{0, 6, 2},
	{1, 7, 3},
	{2, 8, 4},
	{3, 9, 0},
	{0, 7, 8},
	{1, 9, 8},
	{2, 5, 9},
	{3, 5, 6},
	{4, 6, 7}
};

bool search(int c, int *a)
{
	for (int i = 0; i < 3; ++i)
	{
		if (a[i] == c)
			return true;
	}
	return false;
}
bool path(int p, const string &s, int i, int *v)
{
	if (i == s.length())
	{
		return true;	
	}
	int c = s[i] - 'A';
	if (search(c, m[p]))
	{
		v[i] = c;
		return path(c, s, i+1, v);
		
	}
	else if (search(c+5, m[p]))
	{
		v[i] = c+5;
		return path(c+5, s, i+1, v);
	}
	else
	{
		return false;
	}
}
int main()
{
	int t;
	cin >> t;
	string s;
	const int MAX = 1e5;
	int v[MAX];
	while (t--)
	{
		cin >> s;
		int fst = s[0] - 'A';
		bool flag = true;
		if (path(fst, s, 1, v))
		{
			v[0] = fst;
		}
		else if (path(fst+5, s, 1, v))
		{
			v[0] = fst + 5;
		}
		else
		{
			flag = false;
		}
		if (flag)
		{
			int n = s.length();
			for (int i = 0; i < n; ++i)
			{
				cout << v[i];
			}
			cout << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}
