#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int Valor1, Valor2, Valor3;
	
	printf("Ingrese los valores y el programa determinara cual de los 3 valores es el mayor y el minimo:\n\n");
	printf("Indique el valor 1: ");
	
	scanf("%d", &Valor1);
	
	printf("\n\nIndique el valor 2: ");
	
	scanf("%d", &Valor2);
	
	printf("\n\nIndique el valor 3: ");
	
	scanf("%d", &Valor3);
			
			if(Valor1 > Valor2 && Valor2 > Valor3){
			
			
			printf("\n\nEl valor mayor y menor son: %d y %d respectivamente", Valor1, Valor3);
	}
	 
	      else if(Valor1 > Valor3 && Valor3 > Valor2){
		  
		  
		  printf("\n\nEl valor mayor y menor son: %d y %d respectivamente", Valor1, Valor2);
	}
	      else if(Valor2 > Valor1 && Valor1 > Valor3){
	      	
	      	printf("\n\nEl valor mayor y menor son: %d y %d respectivamente", Valor2, Valor3);
		  }
		   else if(Valor2 > Valor3 && Valor3 > Valor1){
	      	
	      	printf("\n\nEl valor mayor y menor son: %d y %d respectivamente", Valor2, Valor1);
	    }
	      else if(Valor3 > Valor2 && Valor2 > Valor1){
	      	
	      	printf("El valor mayor y menor son: %d y %d respectivamente", Valor3, Valor1);
		  }
		   else if(Valor3 > Valor1 && Valor1 > Valor2){
	      	
	      	printf("\n\nEl valor mayor y menor son: %d y %d respectivamente", Valor3, Valor2);
	    }
	       else{
	       	printf("\n\nHay 2 o 3 valores iguales.");
		   }
	
	return 0;
}
