#include <stdio.h>
#include <string.h>


void printAns(const char *str)
{
	int i, noOfInstr = 2, len = strlen(str);

	for(i = 1; i < len ; i++)
	{
		noOfInstr += (str[i]- str[i-1] + 1);
		if(str[i] < str[i-1])
		{
			noOfInstr += 26;
		}

	}
	if(noOfInstr <=  len * 11)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}

}

int main()
{
	int T;

	scanf("%d", &T);
	
	while(T--)
	{
		char str[1001];

		scanf("%s", str);
		printAns(str);
	}
	return 0;
}
