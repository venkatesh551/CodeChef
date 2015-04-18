#include <iostream>

using namespace std;

int main(void)
{
	int n, m, a, b;
	
	cin >> n >> m >> a >> b;
	
	int ans;
	if (m * a > b)
	{
		ans = (n/m) * b + min(b, (n % m) * a);
	}
	else
	{
		ans = n * a;
	}
	cout << ans << endl;
	return 0;
}
