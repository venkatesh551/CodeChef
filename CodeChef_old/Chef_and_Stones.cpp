#include <iostream>
#include <vector>

using namespace std;
typedef long long LL;

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
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n, k;
		cin >> n >> k;
		vector<int> A(n), B(n);
		read(A);
		read(B);
		LL result = 0;
		for (int i = 0; i < n; ++i)
		{
			result = max(result, (LL)B[i] * (k/A[i]));
		}
		cout << result << endl;
	}
	return 0;
}
