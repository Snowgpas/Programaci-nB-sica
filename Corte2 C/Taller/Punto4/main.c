#include <stdio.h>

int main() {

    int matriz[4][4];
    int i, j;
    int maxFila[4];
    int sumaMax = 0;

    printf("Ingrese los valores:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        maxFila[i] = matriz[i][0];
        for(j = 1; j < 4; j++){
            if(matriz[i][j] > maxFila[i]){
                maxFila[i] = matriz[i][j];
            }
        }
        sumaMax += maxFila[i];
    }

    printf("Maximos de cada fila:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", maxFila[i]);
    }

    printf("\nMedia de maximos: %.2f\n", (float)sumaMax / 4);

    return 0;
}


