#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n1, k1, n2, k2;
	cin >> n1 >> n2 >> k1 >> k2;
	if (n1 <= n2)
	{
		cout << "Second" << endl;
	}
	else
	{
		cout << "First" << endl;
	}
	return 0;
}
