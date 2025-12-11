#include <stdio.h>

int main(){
	int N, res;

	printf("Dame el numero del que mostrare su tabla de multiplicar \n");
	scanf("%d",&N);

	for(int i = 1; i<=10; i++)
	{
		res = N * i;

		printf("%d x %d = %d \n",N,i,res);

	}

	return 0;
}
