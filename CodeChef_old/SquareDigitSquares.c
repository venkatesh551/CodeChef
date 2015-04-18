#include <stdio.h>
typedef unsigned long long ULL;
static ULL ps[121];
static int len;

int is_valid(ULL x)
{
	while (x > 0)
	{
		int d = x % 10;
		x /= 10;
		if (d != 0 && d != 1 && d != 4 && d != 9)	
		{
			return 0;
		}
	}
	return 1;
}

void find_list()
{
	int i, j;
	
	for (i = 1, j = 0; i < 100001; i++)
	{
		ULL t = (long long) i * i;
		
		if (is_valid(t))
		{
			ps[j] = t; j++; 
		}
	}
	len = j;
}

int bsearch(ULL key)
{
	int low = 0, mid, high = len - 1;
	
	while (low <= high)
	{
		mid = (low + high)/2;
		
		if (ps[mid] == key)
		{
			return mid;
		}
		else if (ps[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return mid;
}

int main(int argc, char *argv[])
{
	int T;
	
	scanf("%d", &T);
	
	find_list();	
	while (T--)
	{
		ULL a, b;
		int first, last, ans;
		
		scanf("%llu%llu", &a, &b);
		first = bsearch(a);		
		last = bsearch(b);
		
		while (a > ps[first])
		{
			first++;
		}
		while (b < ps[last])
		{
			last--;
		}		
		if (ps[first] >= a && ps[last] <= b)
		{
			ans = last - first + 1;
		}
		else
		{
			ans  = 0;
		}
		printf("%d\n", ans);
	}
	return 0;
}
