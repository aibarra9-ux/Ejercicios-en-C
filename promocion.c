#include <stdio.h>

int main(){
	float pu, costo = 0, porcentaje_descuento, descuento, total;
	int cantidad;

	printf("Usuario, dame el precio unitario de los productos \n");
	scanf("%f",&pu);


	printf("Cantidad	PU	Costo		Des		Descuento		Total a pagar\n");

	for(cantidad = 1; cantidad <= 1000; cantidad++)
	{
		costo = costo + pu;
		
		if(cantidad >= 100 && cantidad <=200)
		{
			porcentaje_descuento = 5.0;
		}
		else if(cantidad >= 201 && cantidad <= 500)
		{
			porcentaje_descuento = 10.0;
		}
		else if(cantidad > 500)
		{
			porcentaje_descuento = 18.0;
		}

		descuento = costo * (porcentaje_descuento / 100);
		total = costo - descuento;



		printf("%d	%.2f	 %.2f	 %.2f	%.2f	%.2f \n",cantidad,pu,costo,porcentaje_descuento,descuento,total);
		




	}

	return 0;
}
