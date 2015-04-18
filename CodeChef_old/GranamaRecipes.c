#include <stdio.h>

int main()
{
	int T;

	scanf("%d", &T);
	while(T--)
	{
		char R[1001], S[1001];
		int i, flag, A[128] = {0}, B[128] = {0};

		scanf("%s%s", R, S);
		for(i = 0; R[i] != 0; i++)
		{
			A[R[i]]++;
		}
		for(i = 0; S[i] != 0; i++)
		{
			B[S[i]]++;
		}
		flag = 0;
		for(i = 'a'; i <= 'z' ; i++)
		{	
			if(A[i] > 0 && B[i] > 0 && A[i] != B[i])
			{
				flag = 1;
			}
			if((A[i] == 0 && B[i] > 0)||(A[i] > 0 && B[i] == 0))
			{
				flag = 0; 
				break;
			}
		}
		if(flag == 0)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	return 0;
}
