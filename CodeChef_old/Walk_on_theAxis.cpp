#include <iostream>

using namespace std;

int main(void)
{
	int t;
	
	cin >> t;
	while (t-- > 0)
	{
		long long n;
		cin >> n;
		cout << n + n * (n + 1)/2 << endl;
	}
	return 0;
}
