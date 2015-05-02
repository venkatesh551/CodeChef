#include <iostream>
#include <vector>

using namespace std;

void read(vector<int> &v)
{
	int n = v.size();
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];	
	}
}

int main(void)
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> A(n), B(n);
	read(A);
	read(B);
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += max(A[i], B[i]);
	}
	cout << ans << endl;
	return 0;
}

