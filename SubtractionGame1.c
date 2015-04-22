#include <stdio.h>

int gcd(int a, int b)
{
	while (b){
		int r =  a%b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{

	int T, N, num[1000], result, i;
	
	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		for(i = 0; i < N; i++)
			scanf("%d", &num[i]);
		result = num[0];
		for(i = 1; i < N; i++){
			result = gcd(result, num[i]);
		}
		printf("%d\n",result);
	}






	return 0;
}
