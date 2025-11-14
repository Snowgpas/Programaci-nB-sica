#include <stdio.h>

int main() {

    int matriz[4][4];
    int i, j;
    int maximos[4];

    printf("Ingrese los valores:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        maximos[i] = matriz[i][0];
        for(j = 1; j < 4; j++){
            if(matriz[i][j] > maximos[i]){
                maximos[i] = matriz[i][j];
            }
        }
    }

    printf("Vector con maximos:\n");
    for(i = 0; i < 4; i++){
        printf("%d ", maximos[i]);
    }

    return 0;
}

