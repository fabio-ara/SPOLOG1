#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char modelos[5][40];
    float consumo[5], litros500;
    int i, indiceMaisEconomico = 0;

    for(i = 0; i < 5; i++) {
        fflush(stdin);
        printf("\nInforme o modelo do carro %d: ", i + 1);
        gets(modelos[i]);
        printf("Informe o consumo em km/l: ");
        scanf("%f", &consumo[i]);
        while(getchar() != '\n');

        if(consumo[i] > consumo[indiceMaisEconomico]) {
            indiceMaisEconomico = i;
        }
    }

    printf("\nModelos e consumos cadastrados:\n");
    for(i = 0; i < 5; i++) {
        litros500 = 500 / consumo[i];
        printf("\nCarro %d\n", i + 1);
        printf("Modelo: %s\n", modelos[i]);
        printf("Consumo: %.2f km/l\n", consumo[i]);
        printf("Litros para percorrer 500 km: %.2f\n", litros500);
    }

    printf("\n------------------------------------------------------------\n");
    printf("Modelo mais economico: %s\n", modelos[indiceMaisEconomico]);
    printf("Consumo do modelo mais economico: %.2f km/l\n", consumo[indiceMaisEconomico]);
    printf("------------------------------------------------------------\n");
    getch();
}
