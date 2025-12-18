#include <stdio.h>

int main(){

	for(int i = 10; i<=150; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d",i);

			 if(i<150)
               		 {
                       		 printf(", ");
               		 }
               		 else if(i == 150)
               		 {
                        	printf("\n");

               		 }

		}
	}
	return 0;
}
