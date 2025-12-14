#include <stdio.h>
#include <math.h>

int main(){
	float x = -10,n, res;

	printf("Usuario, dame el valor final\n");
	scanf("%f",&n);

	do
	{
		if(x != -5)
		{
			res = (4 * pow(x,4) - 3.5 * pow(x,2)) / (x+5);
			printf("%.2f\t %.2f \n",x,res);
		}
		else
		{
			printf("\t Valor indeterminado (division por 0) \n");
		}

		x = x + 0.5;

	}while(x<=n);

	return 0;
}
