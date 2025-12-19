#include <stdio.h>

int main(){
	int num_par = 2, num_3 = 3, num_4 = 4;


	while(num_par <= 200 || num_3 <= 300 || num_4 <= 400)
	{
		if(num_par <= 200)
		{
			printf("%d",num_par);
			num_par = num_par + 2;
		}
		else
		{
			printf(" ");
		}

		printf("\t");

		if(num_3 <= 300)
		{
			printf("%d",num_3);
			num_3 = num_3 + 3;
		}
		else
		{
			printf(" ");
		}

		printf("\t\t");

		if(num_4 <= 400)
		{
			printf("%d",num_4);
			num_4 = num_4 + 4;
		}
		else
		{
			printf(" ");
		}

		printf("\n");

	}

	return 0;
}
