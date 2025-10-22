#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int signo;
	char uno[50];
	char dos[50];
	char tres[50];
	char cuatro[50];
	char cinco[50];
	char seis[50];
	char siete[50];
	char ocho[50];
	char nueve[50];
	char diez[50];
	char once[50];
	char doce[50];
	printf("Ingrese la opcion correspondiente a la fecha de su nacimiento:\n\n1)Aries: 21 de marzo al 19 de Abril.\n\n2)Tauro: 20 de Abril al 20 de Mayo.\n\n3)Geminis: 21 de Mayo al 20 de Junio.\n\n4)Cancer: 21 de Junio al 22 de Julio.\n\n5)Leo: 23 de Julio al 22 de Agosto.\n\n6)Virgo: 23 de Agosto al 22 de Septiembre.\n\n7)Libra: 23 de Septiembre al 22 de Octubre.\n\n8)Escorpio: 23 de Octubre al 21 de Noviembre.\n\n9)Sagitario: 22 de noviembre al 21 de Diciembre.\n\n10)Capricornio: 22 de Diciembre al 19 de Enero.\n\n11)Acuario: 20 de Enero al 18 de Febrero.\n\n12)Piscis: 19 de Febrero al 20 de Marzo.\n\n");
	
	scanf("%d", &signo);
	
	switch(signo){
	
	case 1:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", uno);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Aries", uno);
		
		break;
		
			case 2:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", dos);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Tauro", dos);
		
		break;
		
			case 3:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", tres);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Geminis", tres);
		
		break;
		
			case 4:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", cuatro);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Cancer", cuatro);
		
		break;
		
			case 5:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", cinco);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Leo", cinco);
		
		break;
		
			case 6:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", seis);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Virgo", seis);
		
		break;
		
			case 7:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", siete);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Libra", siete);
		
		break;
		
			case 8:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", ocho);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Escorpio", ocho);
		
		break;
		
			case 9:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", nueve);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Sagitario", nueve);
		
		break;
		
			case 10:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", diez);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Capricornio", diez);
		
		break;
		
			case 11:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", once);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Acuario", once);
		
		break;
		
			case 12:
		
		printf("\nIngrese su fecha de nacimiento: ");
		scanf(" %[^\n]", doce);
		
		printf("\nSu fecha de nacimiento, indica que su signo zodiacal es: Piscis", doce);
		
		break;
		
		
	}
	return 0;
}
