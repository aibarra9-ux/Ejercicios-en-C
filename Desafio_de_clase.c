#include <stdio.h>

int main(){
	float cal, promedio = 0;
	int planas;

	for(int i = 1; i<=7; i++)
	{
		
		printf("Ingrese la calificación de la materia %d: \n",i);
		scanf("%f",&cal);
		
		if(cal >= 0 && cal <=10)
		{
			promedio = promedio + cal / 7.0;
		}
		else
		{
			printf("Error: Calificación invalida, intenta de nuevo \n");
			printf("Ingresa la calificacion de la materia %d: \n",i);
			scanf("%f",&cal);

			if(cal >= 0 && cal<= 10)
			{
			promedio = promedio + cal / 7.0;
			}
			else
			{
				printf("Error: Calificación invalida, intenta de nuevo \n");
                        	printf("Ingresa la calificacion de la materia %d: \n",i);
                        	scanf("%f",&cal);
				if(cal >= 0 && cal<= 10)
                        	{
                        		promedio = promedio + cal / 7.0;
                        	}

			}
		}
		
	}
	
	printf("Tu promedio es: %.2f \n",promedio);

	if(promedio == 10)
	{
		printf("¡Felicidades! \n");
	}
	else if(promedio >= 8 && promedio <= 9.9)
	{
		printf("Muy bien\n");
	}
	else if(promedio >= 6 && promedio <= 7.9)
	{
		printf("Sigue mejorando\n");
	}
	else if(promedio < 6)
	{
		printf("Promedio menor a 6 \n");
		printf("¿Cuantas planas quieres hacer?: ");
		scanf("%d",&planas);

		if(planas >= 1)
		{
			for(int i = 1; i<= planas; i++)
			{
				if(planas < 10)
				{
					 printf("0%d. Tengo que estudiar más\n",i);
				}
				else
				{
					printf("%d. Tengo que estudiar más \n",i);
				}
			}
		}
		else
		{
			printf("Error, planas debe ser mayor a 1 \n");
		}

	}

	return 0;
}
