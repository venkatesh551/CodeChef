#include <stdio.h>
#include <math.h>
int primes[50000] = {2, 3, 5, 7};

int isPrime(int n)
{
	int upperLimit = sqrt(n), i;
	for( i = 0; primes[i] <= upperLimit; i++)
	{
		if(n % primes[i] == 0)
			return 0;	
	}
	return 1;
}


void findAllPrimes()
{
	int j = 4, i;
	
	for(i = 11; i < 100000; i++)
	{
		if(isPrime(i))
			primes[j++] = i;
	}
}


int noOfPrimeFactors(int n)
{
	int cnt = 0,i;

	for(i = 0; primes[i] <= n; i++)
	{
		if(n % primes[i] == 0)	
			cnt++;
	}
	return cnt;
}

int main()
{

	int T, A, B, K;
	
	scanf("%d", &T);
	findAllPrimes();
	while(T--)
	{
		int i, ans = 0;		
		scanf("%d%d%d", &A, &B, &K);
		for(i = A; i <= B; i++)
		{
			if(noOfPrimeFactors(i) == K)
				ans++;
		}
		printf("%d\n", ans);
	}

	return 0;
}
