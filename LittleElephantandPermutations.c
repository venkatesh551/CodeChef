#include <stdio.h>

int findNoOfInversions(int *A, int N)
{
	int i, count = 0;
	
	for(i = 1; i < N; i++)
	{
		if(A[i-1] > A[i])
		{
			count++;
		}
	}
	return count;
}

int findNoOfLocalInversions(int *A, int N)
{
	int i, j, count = 0;

	for(i = 0; i < N; i++)
	{
		for(j = i + 1; j < N; j++)
		{
			if(A[i] > A[j])
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	int T;

	scanf("%d", &T);
	while(T--)
	{
		int i, A[100], N;
		int inversions, localInversions;

		scanf("%d", &N);
		for(i = 0; i < N; i++)
			scanf("%d", &A[i]);
		inversions = findNoOfInversions(A, N);
		localInversions = findNoOfLocalInversions(A, N);
		if(inversions == localInversions)
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
