#include <stdio.h>

int main() {

    int matriz[4][4];
    int i, j;
    int contadorPares = 0;

    printf("Ingrese los valores de la matriz 4x4:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] % 2 == 0){
                contadorPares++;
            }
        }
    }

    printf("Cantidad de numeros pares: %d\n", contadorPares);

    return 0;
}
