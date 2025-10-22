#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	int Cantidadapostada;
	int moneda = rand() % 2;
	int Dehaberganado, Dehaberperdido;
	
	printf("Ingresa los valores indicados para poder jugar doble o nada:\n\n");
	printf("Ingresa la cantidad que vas a apostar: ");
		
		scanf("%d", &Cantidadapostada);
		
		
		Dehaberganado = Cantidadapostada*2;
		Dehaberperdido = Cantidadapostada - Cantidadapostada;
		
		if(moneda == 1){
			
			printf("\n\nHa salido cara, has ganado: %d", Dehaberganado);
		}
		    else{
		    	
		    	printf("\n\nHa salido cruz, has perdido, tu ganancia es: %d", Dehaberperdido);
			}
	return 0;
}
