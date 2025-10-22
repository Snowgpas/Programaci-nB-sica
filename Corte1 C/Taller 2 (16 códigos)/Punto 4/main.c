#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int Valor1, Valor2;
	
	printf("Indique dos valores y se dira cual es el mayor o si son iguales:\n\n");
	
	printf("Indique el valor 1: ");
	
	scanf("%d", &Valor1);
	
	printf("\n\nIndique el valor 2: ");
	
	scanf("%d", &Valor2);
	
	if(Valor1 > Valor2){
		
		printf("\n\nEl valor mayor, es el valor 1, osea: %d.", Valor1);
	}
		else if(Valor1 < Valor2){
			
		printf("\n\nEl valor mayor, es el valor 2, osea: %d.", Valor2);
		}
			else{
				printf("\n\nLos valores, son iguales.");
			}
		
	
	return 0;
}
