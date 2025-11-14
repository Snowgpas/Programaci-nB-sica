#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int tamano;
	printf("Ingrese el tamano del arreglo: ");
	scanf("%d", &tamano);
	int numeros[tamano];
	
	printf("Ingrese %d numeros enteros:\n", tamano);
	
	int i;
	
	for (i = 0; i < tamano; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	printf("\nLos elementos ingresados son;\n");
	for (i = 0; i < tamano; i ++) {
		printf ("%d ", numeros[i]);
	}
	printf("\n");
	return 0;
}
