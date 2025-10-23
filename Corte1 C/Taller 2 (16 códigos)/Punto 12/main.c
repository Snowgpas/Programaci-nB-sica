#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;

    printf("Introduce un numero para ver su tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("\nTabla de multiplicar del %d:\n\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
