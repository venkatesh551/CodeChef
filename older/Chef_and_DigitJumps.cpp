#include <iostream>
#include <algorithm>

using namespace std;

int reverse_direction(string s)
{
	int i, d, n = s.size();	
	int digit_fst_indx[10];
	
	for (i = 0; i < 10; ++i)
	{
		digit_fst_indx[i] = -1;
	}
	for (i = 0; i < n; ++i)
	{
		d = s[i] - '0';
		
		if (digit_fst_indx[d] == -1)
		{
			digit_fst_indx[d] = i;
		}
	}
	int ans = 0;
	i = n-1;
	while (i > 0)
	{
		d = s[i] - '0';
		if (digit_fst_indx[d] < i)
		{
			i = digit_fst_indx[d];
		}
		else
		{
			i--;
		}
		ans++;
	}
	return ans;
}

int forward_direction(string s)
{
	int i, d, n = s.size();	
	int digit_last_indx[10];
	
	for (i = 0; i < 10; ++i)
	{
		digit_last_indx[i] = -1;
	}
	for (i = 0; i < n; ++i)
	{
		d = s[i] - '0';
		digit_last_indx[d] = i;	
	}
	int ans = 0;
	i = 0;
	while (i < n-1)
	{
		d = s[i] - '0';
		if (i < digit_last_indx[d])
		{
			i = digit_last_indx[d];
		}
		else
		{
			i++;
		}
		ans++;
	}
	return ans;
}

int main()
{
	string s;
	
	cin >> s;
	cout << min(forward_direction(s),reverse_direction(s))<< endl;

	return 0;
}
