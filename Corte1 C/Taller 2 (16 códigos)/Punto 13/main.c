#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int contador = 0;
    float promedio;

    printf("Introduce numeros positivos (termina con un numero negativo):\n");

    scanf("%d", &numero);

    while (numero >= 0) {
        suma += numero;
        contador++;
        scanf("%d", &numero);
    }

    if (contador > 0) { 
        promedio = (float)suma / contador;
        printf("El promedio de los %d numeros positivos es: %.2f\n", contador, promedio);
    } else {
        printf("No se introdujeron numeros positivos.\n");
    }

    return 0;
}
