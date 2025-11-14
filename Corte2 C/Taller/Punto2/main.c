#include <stdio.h>

int main() {

    int matriz[4][4];
    int i, j;
    int sumaPares = 0, sumaImpares = 0;
    int sumaPosPares = 0, sumaPosImpares = 0;
    int contPares = 0, contImpares = 0;
    int contPosPares = 0, contPosImpares = 0;

    printf("Ingrese los valores de la matriz:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            if(matriz[i][j] % 2 == 0){
                sumaPares += matriz[i][j];
                contPares++;
            } else {
                sumaImpares += matriz[i][j];
                contImpares++;
            }

            if((i + j) % 2 == 0){
                sumaPosPares += matriz[i][j];
                contPosPares++;
            } else {
                sumaPosImpares += matriz[i][j];
                contPosImpares++;
            }
        }
    }

    printf("Suma pares: %d, Media: %.2f\n", sumaPares, (float)sumaPares / contPares);
    printf("Suma impares: %d, Media: %.2f\n", sumaImpares, (float)sumaImpares / contImpares);
    printf("Suma posiciones pares: %d, Media: %.2f\n", sumaPosPares, (float)sumaPosPares / contPosPares);
    printf("Suma posiciones impares: %d, Media: %.2f\n", sumaPosImpares, (float)sumaPosImpares / contPosImpares);

    return 0;
}

