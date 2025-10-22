#include <stdio.h>
#include <stdlib.h>


int main() {
	
	double Preciototal;
	
	char Producto[100];
	double Valorunitario;
	double Cantidad;
	
	printf("Ingrese los datos requeridos para calcular el importe de venta de un producto en este supermercado: \n\n");
	
	printf("Indique el nombre del producto: ");
	
	scanf("%s", &Producto);
	
	printf("\nIndique el precio por unidad: ");
	
	scanf("%lf", &Valorunitario);
	
	printf("\nIndique el numero de unidades compradas: ");
	
	scanf("%lf", &Cantidad);
	
	Preciototal = Valorunitario * Cantidad;
	
	printf("\n%s: \n\nEl numero de unidades vendidas fue: %.2f \n\nEl precio total fue de: %.2f", Producto, Cantidad, Preciototal);
	

	return 0;
}
