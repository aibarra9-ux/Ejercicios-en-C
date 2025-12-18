#include <stdio.h>

int main(){
	int pu, total = 0;

	printf("Usuario, dame el precio unitario \n");
	scanf("%d",&pu);


	printf("Precio unitario              Total\n");
	for(int i = 1; i<=1000; i++)
	{
		total = total + pu;
	
		printf("%d                    %d \n",i,total);
	}

	return 0;
}
