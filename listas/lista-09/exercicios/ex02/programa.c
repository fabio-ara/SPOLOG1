#include <stdio.h>
#include <string.h>
#include <conio.h>

void formatarValorPIB(long int valorMilhoes, char numero[], char unidade[]) {
    double valorConvertido;

    if(valorMilhoes >= 1000000) {
        valorConvertido = valorMilhoes / 1000000.0;
        sprintf(numero, "%10.2f", valorConvertido);
        strcpy(unidade, "trilhoes");
    } else {
        if(valorMilhoes >= 1000) {
            valorConvertido = valorMilhoes / 1000.0;
            sprintf(numero, "%10.2f", valorConvertido);
            strcpy(unidade, "bilhoes");
        } else {
            sprintf(numero, "%10ld", valorMilhoes);
            strcpy(unidade, "milhoes");
        }
    }
}

void formatarValorPIBMedio(double valorMilhoes, char numero[], char unidade[]) {
    double valorConvertido;

    if(valorMilhoes >= 1000000.0) {
        valorConvertido = valorMilhoes / 1000000.0;
        sprintf(numero, "%10.2f", valorConvertido);
        strcpy(unidade, "trilhoes");
    } else {
        if(valorMilhoes >= 1000.0) {
            valorConvertido = valorMilhoes / 1000.0;
            sprintf(numero, "%10.2f", valorConvertido);
            strcpy(unidade, "bilhoes");
        } else {
            sprintf(numero, "%10.0f", valorMilhoes);
            strcpy(unidade, "milhoes");
        }
    }
}

int main() {
    char pais[10][40];
    char paisAux[40];
    char paisMedia[40];
    char valorNumero[20], valorUnidade[10];
    char mediaNumero[20], mediaUnidade[10];
    char menorNumero[20], menorUnidade[10];
    char maiorNumero[20], maiorUnidade[10];
    long int pib[10], soma = 0, menor, maior, aux;
    double media;
    double diferencaAtual, menorDiferenca;
    int i, x, z, indiceMenor, indiceMaior, indiceMaisProximoMedia;

    printf("Analise de PIBs\n");
    printf("Informe os 10 valores em milhoes de dolares.\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        printf("\nPais %d\n", i + 1);
        printf("Nome do pais: ");
        scanf(" %39[^\n]", pais[i]);
        printf("PIB (em milhoes de dolares): ");
        scanf("%ld", &pib[i]);
        soma = soma + pib[i];

        if(i == 0) {
            menor = pib[i];
            maior = pib[i];
        } else {
            if(pib[i] < menor) {
                menor = pib[i];
            }
            if(pib[i] > maior) {
                maior = pib[i];
            }
        }
    }

    indiceMenor = 0;
    indiceMaior = 0;
    for(i = 1; i < 10; i++) {
        if(pib[i] < pib[indiceMenor]) {
            indiceMenor = i;
        }
        if(pib[i] > pib[indiceMaior]) {
            indiceMaior = i;
        }
    }

    media = soma / 10.0;
    indiceMaisProximoMedia = 0;
    menorDiferenca = media - pib[0];
    if(menorDiferenca < 0) {
        menorDiferenca = menorDiferenca * -1;
    }

    for(i = 1; i < 10; i++) {
        diferencaAtual = media - pib[i];
        if(diferencaAtual < 0) {
            diferencaAtual = diferencaAtual * -1;
        }
        if(diferencaAtual < menorDiferenca) {
            menorDiferenca = diferencaAtual;
            indiceMaisProximoMedia = i;
        }
    }

    menor = pib[indiceMenor];
    maior = pib[indiceMaior];

    formatarValorPIBMedio(media, mediaNumero, mediaUnidade);
    formatarValorPIB(menor, menorNumero, menorUnidade);
    formatarValorPIB(maior, maiorNumero, maiorUnidade);
    strcpy(paisMedia, pais[indiceMaisProximoMedia]);

    for(x = 0; x <= 8; x++) {
        for(z = x + 1; z <= 9; z++) {
            if(pib[x] < pib[z]) {
                aux = pib[x];
                pib[x] = pib[z];
                pib[z] = aux;

                strcpy(paisAux, pais[x]);
                strcpy(pais[x], pais[z]);
                strcpy(pais[z], paisAux);
            }
        }
    }

    printf("\n============================================================\n");
    printf("PIBs ordenados do maior para o menor:\n");
    printf("============================================================\n");
    printf("%-4s %-20s %10s %-8s\n", "Item", "Pais", "Valor", "Unidade");
    printf("============================================================\n");
    for(i = 0; i < 10; i++) {
        formatarValorPIB(pib[i], valorNumero, valorUnidade);
        printf("%-4d %-20s %10s %-8s\n", i + 1, pais[i], valorNumero, valorUnidade);
    }

    printf("============================================================\n");
    printf("Media dos PIBs : %10s %-8s\n", mediaNumero, mediaUnidade);
    printf("PIB mais proximo da media: %s\n", paisMedia);
    printf("Menor PIB      : %10s %-8s (%s)\n", menorNumero, menorUnidade, pais[9]);
    printf("Maior PIB      : %10s %-8s (%s)\n", maiorNumero, maiorUnidade, pais[0]);
    printf("============================================================\n");
    getch();
}
