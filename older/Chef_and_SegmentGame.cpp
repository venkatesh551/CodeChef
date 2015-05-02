#include <iostream>
#include <limits>

using namespace std;
typedef long long LL;
typedef std::numeric_limits< double > dbl;

//power of two "floor" option:

LL floor_2_power(LL k)
{
	LL power = 1;
	while (k >>= 1)
		 power <<= 1;
	return power;
}

double k_th_point(double x, LL n)
{
	LL m = floor_2_power(n);
	//return (x * (2*(k-m) + 1))/(2.0 * m);
	return 0.5 * ((n-m) * (x/m) + (n-m+1) * (x/m));
}

int main(void)
{
	int t;
	cin >> t;
	cout.precision(dbl::digits10);
	while (t-- > 0)
	{
		LL x, k;
		cin >> x >> k;
		cout << fixed << k_th_point(x, k) << endl;
	}
	return 0;
}
