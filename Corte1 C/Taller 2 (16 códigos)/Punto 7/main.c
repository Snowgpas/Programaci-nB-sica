#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int Nota;
	
	printf("Coloque los datos que le sean indicados:\n\n");
	printf("A continuacion, adjunte su nota dada y el programa se la trasladara a formato: ");
	
	scanf("%d", &Nota);
	
	if (Nota >= 0 && Nota <= 4){
		printf("\n\nSuspenso.");
	}
	else if(Nota == 5 || Nota == 6){
		printf("\n\nAprobado.");
	}
	else if(Nota == 7 || Nota == 8){
		printf("\n\nNotable.");
	}
	else if(Nota == 9){
		printf("\n\nSobresaliente.");
	}
	else if(Nota == 10){
		printf("\n\nFelicidades, matricula de honor.");
	}
	else{
		printf("\n\nNota no valida.");
	}
	return 0;
}
