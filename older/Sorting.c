#include <stdio.h>
int  R[500001],  L[500001];
int sort(int *arr, int N)
{
	int pivot, i, j, k;

	if(N <= 1)
		return 0;
	pivot = arr[(N+1)/2];
	j = k = 0;	
	for(i = 1; i <= N; i++)
	{
		if(arr[i] < pivot)
			L[++j] = arr[i];
		else if(arr[i] > pivot)
			R[++k] = arr[i];
	}
	return N + sort(L, j) + sort(R, k);
}

int main()
{

	int N,  A[500001];
	int i;

	scanf("%d", &N);
	for( i =1; i <= N; i++)
		scanf("%d", &A[i]);
	printf("%d\n", sort(A, N));
	return 0;
}

