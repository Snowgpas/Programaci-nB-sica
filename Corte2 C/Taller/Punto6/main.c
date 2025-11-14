#include <stdio.h>

int main() {

    float matriz[3][3];
    float sumaFila[3];
    float sumaColumna[3];
    int i, j;

    printf("Ingrese los valores:\n");

    for(i = 0; i < 3; i++){
        sumaFila[i] = 0;
        for(j = 0; j < 3; j++){
            scanf("%f", &matriz[i][j]);
            sumaFila[i] += matriz[i][j];
        }
    }

    for(j = 0; j < 3; j++){
        sumaColumna[j] = 0;
        for(i = 0; i < 3; i++){
            sumaColumna[j] += matriz[i][j];
        }
    }

    printf("\nTabla con sumas:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%.0f\t", matriz[i][j]);
        }
        printf("= %.0f\n", sumaFila[i]);
    }

    for(j = 0; j < 3; j++){
        printf("%.0f\t", sumaColumna[j]);
    }

    return 0;
}


