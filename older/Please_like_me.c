#include <stdio.h>
int L, D, S, C;

int is_alive()
{
	long long int result = 1;
	long long int base = 1 + C;
	int i, exp = D - 1;
	
	/*while (exp > 0)
	{
    	if (exp & 1) 
    	{
    		result = (result * base);
    	}
    	if (result * S >= L)
	  		return 1;
    	base = (base * base);
    	exp >>= 1;
  	}*/
  	for (i = 0; i < exp; ++i)
  	{
  		result *= base;
  		if (result * S >= L)
  			return 1;
   	}
   	if (result * S >= L)
  			return 1;
  	else
 		return 0;
}


int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d%d%d", &L, &D, &S, &C);
		if (is_alive())
		{
			puts("ALIVE AND KICKING");
		}
		else
		{
			puts("DEAD AND ROTTING");
		}
	
	}
	
	return 0;
}
