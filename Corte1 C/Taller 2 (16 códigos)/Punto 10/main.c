#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, intento, intentos = 0;

    srand(time(NULL));
    numero = rand() % 10 + 1;

    printf("Adivina el numero entre 1 y 10:\n");

    scanf("%d", &intento);
    intentos = 1;

    while (intento != numero) {
        printf("No adivinaste. Intenta de nuevo:\n");
        scanf("%d", &intento);
        intentos++;
    }

    printf("Correcto. El numero era %d.\n", numero);
    printf("Lo lograste en %d intento(s).\n", intentos);

    return 0;
}
