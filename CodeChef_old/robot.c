
int minSteps(int k)
{

	int i, j;

	for( i = 1; i * (i+1) < 2 * k; i++)
		;
	if( i * (i+1) == 2 * k)
		return i;
	for(j = i; ;j++)
	{
		int x, y, min, max;		
		int sum = (j * (j+1)) / 2;
			
		x = y = sum / 2;
		if(sum % 2 == 1)
			y++;
		min = y - x;
		max = min + (x-1)* 2;
		if(k % 2 == 0 && min % 2 == 0 && k >= min && k <= max)
		{
			return j;
		}
		else if(k % 2 == 1 && min % 2 == 1 && k >= min && k <= max)
		{
			return j;
		}
	}
}

#include<stdio.h>
int main()
{

	int x;
	scanf("%d", &x);
	printf("%d\n", minSteps(x));
	return 0;
}

