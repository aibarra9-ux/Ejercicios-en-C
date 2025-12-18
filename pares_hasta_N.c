#include <stdio.h>

int main(){
	int n;

	printf("Usuario, dame el valor de N (final de conteo debe ser mayor a 4) \n");
	scanf("%d",&n);

	for(int i = 4; i<=n; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d",i);

			if(i<n)
			{
				printf(", ");
			}
			else if(i == n)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
