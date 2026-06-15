#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

static void preparar_console_utf8(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_CTYPE, ".UTF8");
}

int main() {
    char produtos[4][50];
    /* ENTREGA_REPLACE_NEXT:     char *nomesMeses[4] = {"Mes 1", "Mes 2", "Mes 3", "Mes 4"}; */
    char *nomesMeses[4] = {"Mês 1", "Mês 2", "Mês 3", "Mês 4"};
    char entradaPreco[30], sobra;
    float precos[4][4], media;
    float menorPreco, maiorPreco, soma, valorLido;
    int i, j, indiceMenorProduto = 0, indiceMaiorProduto = 0, mesMenor = 0, mesMaior = 0, tamanho, leituraValida;

    preparar_console_utf8();

    /* ENTREGA_REPLACE_NEXT:     printf("CONTROLE DE PRECOS DOS PRODUTOS\n"); */
    printf("CONTROLE DE PREÇOS DOS PRODUTOS\n");
    printf("================================\n\n");
    /* ENTREGA_REPLACE_NEXT:     printf("Cadastre os 4 produtos e informe os precos dos ultimos 4 meses.\n\n"); */
    printf("Cadastre os 4 produtos e informe os preços dos últimos 4 meses.\n\n");

    for(i = 0; i < 4; i++) {
        printf("Produto %d\n", i + 1);
        printf("---------\n");
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produtos[i], 50, stdin);
        tamanho = strlen(produtos[i]);
        if(tamanho > 0 && produtos[i][tamanho - 1] == 10) {
            produtos[i][tamanho - 1] = 0;
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++) {
        /* ENTREGA_REPLACE_NEXT:         printf("Precos do produto %s\n", produtos[i]); */
        printf("Preços do produto %s\n", produtos[i]);
        printf("---------------------------\n");
        for(j = 0; j < 4; j++) {
            do {
                /* ENTREGA_REPLACE_NEXT:             printf("%s - digite o preco (em R$): ", nomesMeses[j]); */
                printf("%s - digite o preço (em R$): ", nomesMeses[j]);
                scanf("%29s", entradaPreco);
                leituraValida = sscanf(entradaPreco, "%f%c", &valorLido, &sobra);
                if(leituraValida == 1) {
                    precos[i][j] = valorLido;
                } else {
                    /* ENTREGA_REPLACE_NEXT:                     printf("Preco invalido. Digite novamente.\n"); */
                    printf("Preço inválido. Digite novamente.\n");
                }
            } while(leituraValida != 1);
        }
        printf("\n");
    }

    menorPreco = precos[0][0];
    maiorPreco = precos[0][0];

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(precos[i][j] < menorPreco) {
                menorPreco = precos[i][j];
                indiceMenorProduto = i;
                mesMenor = j;
            }
            if(precos[i][j] > maiorPreco) {
                maiorPreco = precos[i][j];
                indiceMaiorProduto = i;
                mesMaior = j;
            }
        }
    }

    printf("RESUMO DOS PRODUTOS CADASTRADOS\n");
    printf("================================\n");
    for(i = 0; i < 4; i++) {
        soma = 0;
        printf("\nProduto %d: %s\n", i + 1, produtos[i]);
        for(j = 0; j < 4; j++) {
            printf("%s: R$ %.2f\n", nomesMeses[j], precos[i][j]);
            soma += precos[i][j];
        }
        media = soma / 4;
        /* ENTREGA_REPLACE_NEXT:         printf("Preco medio: R$ %.2f\n", media); */
        printf("Preço médio: R$ %.2f\n", media);
    }

    /* ENTREGA_REPLACE_NEXT:     printf("\nMENOR PRECO REGISTRADO\n"); */
    printf("\nMENOR PREÇO REGISTRADO\n");
    printf("======================\n");
    printf("Produto: %s\n", produtos[indiceMenorProduto]);
    /* ENTREGA_REPLACE_NEXT:     printf("Preco: R$ %.2f\n", menorPreco); */
    printf("Preço: R$ %.2f\n", menorPreco);
    /* ENTREGA_REPLACE_NEXT:     printf("Mes: %d\n", mesMenor + 1); */
    printf("Mês: %d\n", mesMenor + 1);

    /* ENTREGA_REPLACE_NEXT:     printf("\nMAIOR PRECO REGISTRADO\n"); */
    printf("\nMAIOR PREÇO REGISTRADO\n");
    printf("======================\n");
    printf("Produto: %s\n", produtos[indiceMaiorProduto]);
    /* ENTREGA_REPLACE_NEXT:     printf("Preco: R$ %.2f\n", maiorPreco); */
    printf("Preço: R$ %.2f\n", maiorPreco);
    /* ENTREGA_REPLACE_NEXT:     printf("Mes: %d\n", mesMaior + 1); */
    printf("Mês: %d\n", mesMaior + 1);

    getch();
}