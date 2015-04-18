#include <iostream>

using namespace std;

int no_of_divisors(int n)
{
	int i, cnt = 2;
	
	if (n == 1)
	{
		return 1;
	}
	for (i = 2; i * i  < n; ++i)
	{
		if (n % i == 0)
		{
			cnt += 2;
		}
	}
	if (i * i == n)
	{
		cnt++;
	}
	return cnt;
}

int main()
{
	const int MAX_SIZE = 1e5+1;
	int A[MAX_SIZE], divisors_cnt[130] = {0};
	
	int sum = 0;
	for (int i = 1; i < MAX_SIZE; ++i)
	{
		int x = no_of_divisors(i);	

		if (divisors_cnt[x] == 0)
		{
			sum += i;
			A[i] = sum;
			divisors_cnt[x] = 1;
		}
		else
		{
			A[i] = sum;
		}
	}
	int n;
	cin >> n;
	cout << A[n] << endl;
	return 0;
}
