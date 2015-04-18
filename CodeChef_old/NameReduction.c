#include <stdio.h>

void readParentName(int *count)
{
	char name[40001];
	int i;

	scanf("%s", name);
	for(i = 0; name[i]; i++)
		count[name[i]]++;

}

int main()
{
	
	int T;

	scanf("%d",&T);
	while(T--)
	{
		char childName[40001];
		int count[128] = {0};
		int n, i, j;

		readParentName(count);
		readParentName(count);
		scanf("%d", &n);
		for(i = 0; i < n; i++)
		{
			scanf("%s", childName);
			for(j = 0; childName[j] ; j++)
				count[childName[j]]--;
		}
		for(i = 'a'; i <='z' && count[i] >= 0; i++)
			;
		if(i > 'z')
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}
