#include <iostream>

using namespace std;
typedef long long LL;

LL mod_pow(LL a, LL b, LL p)
{
	LL result = 1;
	
	while (b > 0)
	{
		if (b & 1)
		{
			result = (result * a) % p;
		}
		a = (a * a) % p;
		b >>= 1;
	}
	return result;
}

LL prod(int n, int p)
{
	LL x = 1;
	for (int i = 1; i <= 5; ++i)
	{
		x = (n + i) * x % p;
	}
	return x;
}

int main()
{
	int n;
	cin >> n;
	if (n < 13)
	{
		cout << "0" << endl;	
	}
	else
	{
		const int p = 1e9 + 7;
		const int v = mod_pow(120, p-2, p);
		n = (n - 13)/2;
		int x = 1;
		for (int i = 1; i <= n; ++i)
		{
			x = (x + prod(i, p) * v) % p;
		}
		cout << x << endl;
	}
	return 0;
}	
