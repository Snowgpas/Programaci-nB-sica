#include <stdio.h>

int main() {
    int numero, i, esPrimo = 1; 

    printf("Introduce un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("El numero no es primo.\n");
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) { 
                esPrimo = 0; 
                break;       
            }
        }

        if (esPrimo) {
            printf("El numero %d es primo.\n", numero);
        } else {
            printf("El numero %d no es primo.\n", numero);
        }
    }

    return 0;
}
