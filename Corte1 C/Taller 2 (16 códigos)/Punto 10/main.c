#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Introduce una lista de numeros (termina con 0):\n");

    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }

        scanf("%d", &numero);
    }

    printf("\nCantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);

    return 0;
}
