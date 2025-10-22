#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int anio;
	
	 printf("Ingrese el año que quiere determinar como bisiesto o no:\n\n");
	 
	 scanf("%d", &anio);
	
	if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){
		
		printf("\n\nEs bisiesto.");
	}
			  
			  else{
			  	printf("\n\nNo es bisiesto.");
			  }
	return 0;
}
