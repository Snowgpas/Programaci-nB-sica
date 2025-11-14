#include <stdio.h>

int main() {

    int matriz[4][4];
    int i, j;
    int max, min;
    int suma = 0;

    printf("Ingrese los valores:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    max = matriz[0][0];
    min = matriz[0][0];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > max){
                max = matriz[i][j];
            }
            if(matriz[i][j] < min){
                min = matriz[i][j];
            }
            suma += matriz[i][j];
        }
    }

    printf("Maximo: %d\n", max);
    printf("Minimo: %d\n", min);
    printf("Media: %.2f\n", (float)suma / 16);

    return 0;
}

