#include <stdio.h>
#include <stdlib.h>

unsigned constructST(unsigned *A, int b, int e, unsigned *st, int node)
{
	if(b == e)
	{
		return (st[node] = A[b]);
	}
	st[node] = constructST(A, b, (b+e)/2, st, 2*node + 1)  *
			   constructST(A, (b+e)/2 + 1, e, st, 2*node + 2) ;
	return st[node];
}

unsigned query(unsigned *A, int b, int e, unsigned *st, int node, int L, int R, unsigned M)
{
	unsigned leftProd, rightProd; 

	if(e < L || R < b)
		return 1;
	if(b >= L && e <= R)
		return st[node] % M;
	leftProd =  query(A, b, (b+e)/2, st, 2*node + 1, L, R, M) % M ;
	rightProd = query(A, (b+e)/2 + 1, e, st, 2*node + 2, L, R, M) % M ;

	return (leftProd * rightProd ) % M;
}


int main()
{
	
	unsigned T, i, N, *A, *st;

	scanf("%u", &N);
	A = (unsigned *) malloc(sizeof(unsigned) * N);
	for(i = 0; i < N; i++)
		scanf("%u", &A[i]);
	/* Build segment tree from given array */
    st = (unsigned *) malloc(sizeof(unsigned) * N * 2);
	constructST(A, 0, N-1, st, 0);
	scanf("%u", &T);
	while(T--)
	{
		unsigned int L, R, M, ans;
		scanf("%u%u%u", &L, &R, &M);
		ans = query(A, 0, N-1, st, 0, L-1, R-1, M);
		printf("%u\n",ans);
	}
	free(A);
	free(st);
	return 0;
}
