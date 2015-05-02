#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001
#define MOD 1000000
static int A[MAX_SIZE];


int get_result(int *inp)
{
	int n = inp[0];
	int a = inp[1];
	int b = inp[2];
	int c = inp[3];
	int i, prev, cur, turn, x, f_sum = 0, s_sum = 0;
	
	prev = inp[4]; 
	memset(A, 0, sizeof(A));
	A[prev] = 1;

	for (i = 1; i < n; ++i)
	{
		cur = (((long long)a * prev + b) * prev + c) % MOD;
		A[cur]++;
		prev = cur;
	}
	turn = 0;
	for (i = MAX_SIZE -1 ; i >= 0 && n > 0; --i)
	{
		if (A[i] > 0)
		{
			if (turn & 1)
			{
				x = (A[i] + 1)/2;
				s_sum += x * i;
				f_sum += (A[i] - x) * i;
				turn += A[i];
			}
			else
			{
				x = (A[i] + 1)/2;
				f_sum += x * i;
				s_sum += (A[i] - x) * i;
				turn += A[i];
			}
			
			n -= A[i];
		}
	}
	return f_sum > s_sum ? f_sum - s_sum : s_sum - f_sum;
}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int i, inp[5];
		
		for (i = 0; i < 5; ++i)
			scanf("%d", &inp[i]);
		printf("%d\n", get_result(inp));	
	}
	
	return 0;
}
