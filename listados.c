#include <stdio.h>

int main(){

	printf("Impares: ");
	for(int i = 11; i<=33; i++)
	{
		if(i % 2 == 1)
		{
			printf("%d",i);

			if(i<33)
			{
				printf(", ");
			}
			else if(i >= 33)
			{
				printf("\n");
			}
		}
	}

	printf("Pares: ");
        for(int i = 12; i<=34; i++)
        {
                if(i % 2 == 0)
		{
			printf("%d",i);

               	 	if(i<34)
               	 	{
                        	printf(", ");
                	}
                	else if(i >= 34)
                	{
                        	printf("\n");
                	}
		}
        }


	return 0;
}
