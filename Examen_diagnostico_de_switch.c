#include <stdio.h>

int main(){
	int opc, i;
	int n, m;
	float num1, num2, res, cal;
	do
	{
		printf("===MENU INTERACTIVO=== \n");
		printf("1. Suma (solo numeros positivos mayores a 0) \n");
		printf("2. Conteo de número n a número m \n");
		printf("3. Evaluación de calificaión \n");
		printf("4. SALIR \n");
		printf("Usuario, elija una opcion: ");
		scanf("%d",&opc);

		switch(opc)
		{
			case 1:
				printf("Ingresa el primer número: ");
				scanf("%f",&num1);

				printf("Ingresa el segundo  número: ");
                                scanf("%f",&num2);

				if(num1 > 0 && num2 > 0)
				{
					res = num1 + num2;
					printf("la suma es: %.2f \n",res);
				}
				else
				{
					printf("ERROR: ambos numeros deben ser mayores a 0 \n");
				}

				break;

			case 2:
				printf("Ingresa el número inicial (n): ");
                                scanf("%d",&n);

                                printf("Ingresa el número final (m): ");
                                scanf("%d",&m);

				if(m > 0 && n > 0 && m > n)
				{
					for(i = n; i <= m + 1; i++)
					{
						if(i <= m){

							printf("%d ",i);
						}
						else
						{
							printf("\n");
						}

					}
				}
				else
				{
					printf("ERROR: ambos numeros deben ser mayores a 0 y m debe ser mayor a n \n");
				}
		
				break;

			case 3:
				printf("¿Cuanto sacaste en fundamentos de programacion? ");
				scanf("%f",&cal);

				if(cal == 10)
				{
					printf("Excelente\n");
				}
				else if(cal >= 9.0 && cal <= 9.9)
				{
					printf("Muy bien\n");
				}
				else if(cal >= 6.0 && cal <= 8.9)
				{
					printf("Buen esfuerzo \n");
				}
				else if(cal < 6)
				{
					printf("Sigue practicando y estudiando \n");
				}
				else
				{
					printf("Ingresa una calificacion valida \n");
				}

				break;

			case 4:
				printf("Saliendo del programa... \n");
				break;

			default:
				printf("Usuario, elija una opción valida \n");
				break;
		}

	}while(opc != 4);

	return 0;
}
