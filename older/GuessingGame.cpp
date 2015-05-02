#include <iostream>

using namespace std;
typedef long long LL;

LL gcd(LL a, LL b)
{
	while (b > 0)
	{
		LL r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int T;
	
	cin >> T;
	
	while (T-- > 0)
	{
		LL n, m;
		LL a, b, c;
		 
		cin >> n >> m;
		a = (n/2) * (m - m/2) + (m/2) * (n - n/2);
		b = n * m;
		c = gcd(a, b);
		cout << a/c << "/" << b/c << endl;
	}
	return 0;
}
