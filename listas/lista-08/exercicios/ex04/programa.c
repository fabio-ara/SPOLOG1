#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    struct Bandas {
        char nome[60], tipo[40];
        int numeroIntegrantes, posicaoRanking;
    };
    struct Bandas bandas[10], aux;
    int count, j;

    for(count = 0; count < 10; count++) {
        fflush(stdin);
        printf("\nNome da banda %d: ", count + 1);
        gets(bandas[count].nome);
        printf("Tipo de musica: ");
        gets(bandas[count].tipo);
        printf("Numero de integrantes: ");
        scanf("%d", &bandas[count].numeroIntegrantes);
        printf("Posicao no ranking: ");
        scanf("%d", &bandas[count].posicaoRanking);
        while(getchar() != '\n');
    }

    for(count = 0; count < 9; count++) {
        for(j = count + 1; j < 10; j++) {
            if(strcmp(bandas[count].nome, bandas[j].nome) > 0) {
                aux = bandas[count];
                bandas[count] = bandas[j];
                bandas[j] = aux;
            }
        }
    }

    printf("\nBandas em ordem de nome:\n");
    for(count = 0; count < 10; count++) {
        printf("\nBanda %d\n", count + 1);
        printf("Nome: %s\n", bandas[count].nome);
        printf("Tipo de musica: %s\n", bandas[count].tipo);
        printf("Numero de integrantes: %d\n", bandas[count].numeroIntegrantes);
        printf("Posicao no ranking: %d\n", bandas[count].posicaoRanking);
    }

    getch();
}