#include <stdio.h>

int main(){
	int sumatoria = 0;

	for(int i = 1; i<=45; i++)
	{
	
		printf("%d",i);
		
		sumatoria = sumatoria + i;

		if(i < 45)
		{
			printf(" + ");
		}
	}

	printf(" = %d \n",sumatoria);

	return 0;
}
