#include <stdio.h>


void Max_Heapify(int *A, int i, int len)
{
	int left  = 2 *i + 1 ;
	int right =  left + 1 ;
	int largest  = i;
	if (left < len && A[left] > A[largest])
		largest = left;
	if (right < len && A[right] > A[largest])
		largest  = right;
	if (largest != i )
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		Max_Heapify(A, largest, len);
	}
}

void Build_Max_Heap(int *A, int len)
{
	int i;

	for(i = len/2 - 1; i >= 0; i--)
		Max_Heapify(A, i, len);

}

int main()
{
	int T;

	scanf("%d", &T);

	while(T--)
	{
		int i, n, m, p, ans, visitedCnt[101] = {0};

		scanf("%d%d", &n, &m);
		for(i = 0; i < m ; i++)
		{
			scanf("%d", &p);
			visitedCnt[p]++;
		}
		ans  = 0;
		for(i = 0; i < n; i++)
		{
			int c, j , v[101];
			
			scanf("%d", &c);
			for(j = 0; j < c; j++)
				scanf("%d", &v[j]);
			if(visitedCnt[i])
			{
				Build_Max_Heap(v,c);
				for(j = 0; j < visitedCnt[i] ; j++)
				{
					ans += v[0];
					v[0] = 0;
					Max_Heapify(v,  0, c);
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
