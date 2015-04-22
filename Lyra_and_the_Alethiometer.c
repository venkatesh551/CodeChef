#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(const char *S, int len, int prev_ind, int cur_ind)
{
	int cnt, j, k;

	for (cnt  = 0, j = prev_ind, k = cur_ind; cnt < len; j++, k++, cnt++)
	{
		if (isdigit(S[j]) && isdigit(S[k]))
		{
			if(S[j] < S[k] )
			{
				return cur_ind; 
			}
			else if(S[j] > S[k] )
			{
				return prev_ind;
			}
		}
		else if(isdigit(S[j]) && isupper(S[k]))
		{
			if (S[j] < '9')
			{
				return cur_ind; 
			}
		}
		else if(isupper(S[j]) && isdigit(S[k]) )
		{
			if (S[k] < '9')
			{
				return prev_ind;
			}
		}
	}
	return prev_ind;
}


int main()
{
	char S[1001];
	int s_len, max_len, i, cnt, start_ind = 0;	
	
	scanf("%s", S);
	s_len = strlen(S);
	max_len = 1;
	for (i = 0; i < s_len; i++)
	{
		int j, cur_len;

		if (S[i] == '0')
		{
			continue;
		}
		cnt  = 0;
		for (j = i; j < s_len ; j++)
		{
			if (isupper(S[j]))
			{
				cnt++;
			}
			if (cnt == 2)
			{
				break;
			}
		}
		cur_len = j - i;
		if (cur_len > max_len)
		{
			max_len = cur_len;
			start_ind = i;
		}
		else if (cur_len == max_len)
		{
			start_ind = compare(S, cur_len, start_ind, i);		
		}
	}
	for (cnt  = 0, i = start_ind; cnt < max_len; i++, cnt++)
	{
		if(isupper(S[i]))
		{
			putchar('9');
		}
		else
		{	
			putchar(S[i]);
		}
	}
	putchar('\n');
	return 0;
}


