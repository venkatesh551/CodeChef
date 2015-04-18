#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char line[120];
	int count = 0, N;
	gets(line);
	N = atoi(line);
	while(N--){
		int p, q, r, flag;
		int i;

		gets(line);
		p = q = r = 0;
		flag = 1;
		for(i = strlen(line)-1; line[i] != ' '; i--)
		{
			int c = line[i];
			if(c == '8')
				p++;
			else if(c == '5')
				q++;
			else if(c == '3')
				r++;
			else if(c >='0' && c <='9'){
				flag = 0;
				break;
			}
		}
		if(flag && p >= q && q >= r)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
 
