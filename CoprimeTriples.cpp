#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	while (b)
	{
		int r =  a % b;
		a = b;
		b = r;	
	}
	return a;
}

int no_of_triples(int *a, int n)
{
	int cnt = 0;
	
	for (int i = 0; i < n-2; ++i)
	{
		for (int j = n-1; (j-i) > 1; j--)
		{
			int x = gcd(a[i], a[j]);
			if (x == 1)
			{
				cnt += j-i-1;
			}
			cout << x << endl;
		}
	}
	return cnt;
}

int main()
{
	int n;
	const int MAX_SIZE = 1e5;
	int A[MAX_SIZE];
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	cout << no_of_triples(A, n) << endl;
	return 0;
}
