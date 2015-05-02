#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

	char str[1001];
	int i, j, len, cnt, startInd, endInd, largestSubStrLength = 0;
	scanf("%s",str);
	len = strlen(str);

	startInd = endInd = largestSubStrLength = 0;
	for(i = 0; i < len ; i++)
	{
		if(str[i] == '0')		
			continue;
		if(isalpha(str[i]))
			cnt = 1;
		else
			cnt = 0;

		for(j = i+1; j < len; j++)	
		{
			if(isalpha(str[j]))
			{
				cnt++;
			}
			if(cnt == 2)
				break;
		}
		if(largestSubStrLength < (j-i))
		{
			startInd = i;
			endInd = j ;
			largestSubStrLength  = j-i;
		}
	}
	for(i = startInd; i < endInd; i++)
	{
		if(isalpha(str[i]))
			putchar('9');
		else
			putchar(str[i]);
	}
	putchar('\n');
	return 0;
}
