#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char Trabajador[100];
	int horastrabajadas, Sueldobruto, IRPF, cantidadporhoratrabajada;
	double Retencion, Sueldoneto;
	
	printf("Indique los valores pedidos para calcular el sueldo bruto, la retencion y el sueldo neto de un trabajador: \n\n");
	
	printf("Indique el nombre del trabajador: ");
	
	scanf("%[^\n]s", &Trabajador);
	
	printf("\nIndique la cantidad de horas trabajadas: ");
	
	scanf("%d", &horastrabajadas);
	
	printf("\nIndique el valor ganado por hora trabajada: ");
	
	scanf("%d", &cantidadporhoratrabajada);
	
	IRPF = 5.0;
	Sueldobruto = horastrabajadas*cantidadporhoratrabajada;
	Retencion = (Sueldobruto*IRPF)/100.0;
	Sueldoneto = Sueldobruto - Retencion;
	
	printf("El sueldo bruto de %s es de: %d\n\n La retencion es de: %.2f\n\n El sueldo neto es de: %.2f", Trabajador, Sueldobruto, Retencion, Sueldoneto);
	
	return 0;
}
