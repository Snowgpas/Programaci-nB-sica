#include <stdio.h>

int main() {
    int N, M;
    int contador = 0;
    int i;

    printf("Ingresa el primer numero (N): ");
    if (scanf("%d", &N) != 1) return 0;
    printf("Ingresa el segundo numero (M): ");
    if (scanf("%d", &M) != 1) return 0;

    if (N <= M) {
        printf("Error: el primer numero debe ser mayor que el segundo.\n");
        return 0;
    }

    
    for (i = M + 1; i < N && contador < 3; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }

  
    printf("\n");

    if (contador < 3) {
        printf("No hay tres numeros pares entre los valores ingresados.\n");
    }

    return 0;
}
