#include <stdio.h>

int main() {
	
	char caracteres1[] = "123";
	char caracteres2[] = "1234";
	
	int i;
	int sonIguales = 1;
	
	
	for(i = 0; caracteres1[i] != '\0' || caracteres2[i] != '\0'; i++) {
		
		
	if(caracteres1[i] != caracteres2[i]) {
		
		sonIguales = 0;
		
		break;
	   }
	}
	
	if(sonIguales) {
		
		printf("Las cadenas %s y %s son iguales.\n", caracteres1, caracteres2);
	}
	else{
		
		printf("Las cadenas %s y %s no son iguales.\n", caracteres1, caracteres2);
	}
	
	
    return 0;
}
