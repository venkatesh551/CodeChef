#include <iostream>
#include <vector>

using namespace std;
typedef long long LL;

LL mod_inverse(LL a, LL b, LL p)
{
	LL res = 1;
	while (b > 0)
	{
		if (b & 1)
			res = ((LL)res * a)%p;
		a = ((LL)a * a) % p;
		b >>= 1;
	}
	return res;
}
const int MAX = 55;
LL fact[MAX];
LL ifact[MAX];

void fact_mod(int n, int p)
{
	fact[0] = 1;
	for (int i = 1; i <=n; ++i)
	{
		fact[i] = (fact[i-1] * i)% p; 
	}
}

void inv_fact_mod(int n, int p)
{
	ifact[0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		ifact[i] = (ifact[i-1] * mod_inverse(i, p-2, p)) % p;
	}
}

LL ncr(int n, int r, int p)
{
	return  (((fact[n] * ifact[n-r]) % p) * ifact[r]) % p;
}

int main(void)
{
	const int p = 1e9 + 7;
	fact_mod(53, p);
	inv_fact_mod(53, p);
	
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n, k;
		cin >> n >> k;
		cout << (ncr(n, k, p) * fact[k]) % p << endl;
	}
	return 0;
}

