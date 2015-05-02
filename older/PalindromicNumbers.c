#include <stdio.h>
#include <string.h>


int isPalindrome(unsigned long long x , int base)
{
	
	int i, j, str[64], len;

	for(len = 0; x ; len++ )
	{
		str[len] = x % base;
		x /= base;
	}

	for( i = 0, j = len -1; i < j ; i++, j--)
	{
		if(str[i] != str[j])
			return 0;
	}
	return 1;
}

int main()
{
	int T;
	scanf("%d", &T);
	
	while(T--)
	{
		unsigned long long int x, i;

		scanf("%llu", &x);
		for(i = 2; i <= 10; i++)
		{
			if(isPalindrome(x, i))
			{
				printf("%llu\n", i);
				break;
			}
		}
		if(i == 11)
		{
			printf("%llu\n", x-1);
		}
		
	}
	return 0;
}

