#include <stdio.h>
#include <stdlib.h>

int main() {
    char contrasenaCorrecta[] = "1234";
    char contrasenaIngresada[20];
    int intentos = 0;
    int acertado = 0; 

    while (intentos < 3 && !acertado) {
        printf("Introduce la contrasena: ");
        scanf("%s", contrasenaIngresada);
        
        int i;
        int sonIguales = 1;
        
		for (i = 0; contrasenaCorrecta[i] != '\0' || contrasenaIngresada[i] != '\0'; i++) {
			
            if (contrasenaCorrecta[i] != contrasenaIngresada[i]) {
                sonIguales = 0;
                break;
            }
        }

        if (sonIguales) {
            printf("Contrasena correcta.\n");
            acertado = 1;
        } else {
            printf("Contrasena incorrecta.\n");
            intentos++;
        }
    }

    if (!acertado) {
        printf("Lo siento, contrasena equivocada.\n");
    }

    return 0;
}
