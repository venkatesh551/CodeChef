#include <stdio.h>

void div(int x, int y, int C)
{
	int p, i;
	
	printf("%d.", x/y);
	p = x % y;
	for (i = C; i > 0; i--)
	{
		p *= 10;
		printf("%d",p / y);
		p %= y;
	}

}

void read_inp(int *num)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		int j, k = 100, val = 0;
		char str[10];
	
		scanf("%s", str);
		for (j = 0; str[j] != 0; j++)
		{
			if (str[j] != '.')
			{
				val += k * (str[j]-'0');
				k /= 10;
			}
		}
		num[i] = val;
	}

}

int main(void)
{
	int T;
	
	scanf("%d", &T);
	while (T--)
	{
		int x, y, D, num[3];
		
		read_inp(num);
		scanf("%d", &D);
	
		x = num[0] * 100 * (num[1] + num[2]);
		x -= num[0] * num[0] * num[1];
		y = 100 * (100 - num[0]) * (100 - num[0]);
		div(x, y, D);
		printf("\n");
	}
	
	return 0;
}
