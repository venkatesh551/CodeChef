#include <stdio.h>
#include <stdlib.h>

char mark[100001];
int diffCnt[100001];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main()
{
	int M, i, j;
	int num[100001];
	int lastNum, cnt;

	scanf("%d",&M);
	for(i = 0; i < M; i++)
		scanf("%d",&num[i]);
	qsort(num, M, sizeof(int), compare);

	cnt = 1;
	lastNum = num[0];
	mark[0] = 1;
	for(i = 1; i < M; i++){
		int diff = num[i] - lastNum;
		if(diffCnt[diff] != 2){
			diffCnt[diff] = 2;
			mark[i] = 1;
			lastNum = num[i];
			cnt++;
		}
	}
	printf("%d\n",cnt);
	for(i = 0; i < M; i++){
		if(mark[i])
			printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}
