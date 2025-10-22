#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	const double PI = 3.141592653589;
	
	int AyP, circulo;

double A, B, C, D, E, F, G;
double area1, area2, area3, area4, area5;
double perimetro1, perimetro2, perimetro3, perimetro4, perimetro5;
double triangulos, hipotenusa, diametro;

printf("Elija alguna de las figuras para determinar su area y perimetro. \n\n1) Cuadrado. \n2) Rectangulo. \n3) Triangulo. \n4) Circulo. \n \n");

scanf("%d", &AyP);


switch (AyP){


case 1:

printf("\nElegiste la opcion: Cuadrado. \n\nIngrese un lado: ");

scanf("%lf", &A);

area1 = A*A;

perimetro1 = A+A+A+A;

printf("El area del cuadrado es: %f \n", area1);

 printf("El perimetro del cuadrado es: %f \n", perimetro1); 

break;

case 2:
	
	 printf("\nElegiste la opcion: Rectangulo. \n\nIngrese la base: ");
	 
	scanf("%lf", &B);
	
		printf("Ingrese la altura: ");
		
	scanf("%lf", &C);
	
	area2 = B * C;
	
	perimetro2 = (2 * (B + C));
	
	printf("El area del rectangulo es: %f \n", area2);
	printf("El perimetro del rectangulo es: %f \n", perimetro2);
	
	break;
	
	case 3:
		
		printf("\nElegiste la opcion: Triangulo. \n\nIngrese la base: ");
		
		scanf("%lf", &D);
		
		printf("Ingrese la altura: ");
		
		scanf("%lf", &E);
		
		printf("Ingrese la hipotenusa: ");
		
		scanf("%lf", &hipotenusa);
		
		area3 = ((D * E) / 2);
		
		perimetro3 = D + E + hipotenusa;
		
		printf("El area del triangulo es: %f \n", area3);
		printf("El perimetro del triangulo es: %f \n", perimetro3);
		
		break;
		
		case 4:
		
			printf("\nElegiste la opcion: Circulo. \n\nIngrese como quiere sacar el area y el perimetro. \n\n1) Con diametro \n2) Con radio \n \n");
		
		scanf("%d", &circulo);
	
			switch(circulo){
				
				case 1:
				
				printf("\nElegiste la opcion: diametro. \n\nIngrese el diametro: ");
				
				scanf("%lf", &F);
				
				double area4 = PI * (F/2)*(F/2);
				double perimetro4 = PI * F;
				
				printf("El area del circulo es: %f \n", area4);
				printf("El perimetro del circulo es: %f \n", perimetro4);
				
				break;
				
				case 2:
					
					printf("\nElegiste la opcion: radio. \n\nIngrese el radio: ");
					
					scanf("%lf", &G);
					
					double area5 = (PI * (G*G));
					double perimetro5 = (2 * PI) * (G);
					
					printf("El area del circulo es: %f \n", area5);
					printf("El perimetro del circulo es %f \n", perimetro5);
					
				
				break;
				

	
	}
	
}


	return 0;
}
