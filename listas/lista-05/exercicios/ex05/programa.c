#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

static void preparar_console_utf8(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
}

int main() {
    char nome[100];
    char continuar;
    float preco_compra, preco_venda, lucro_percentual, lucro_valor;
    float total_compras, total_vendas, total_lucro;
    int qtd_ate_10, qtd_10_a_30, qtd_30_a_50, qtd_acima_50;

    preparar_console_utf8();

    total_compras = 0.0f;
    total_vendas = 0.0f;
    total_lucro = 0.0f;
    qtd_ate_10 = 0;
    qtd_10_a_30 = 0;
    qtd_30_a_50 = 0;
    qtd_acima_50 = 0;
    continuar = 'S';

    do {
        printf("Informe o nome da mercadoria: ");
        scanf(" %99[^\n]", nome);
        printf("Informe o preço de compra (R$): ");
        scanf("%f", &preco_compra);
        printf("Informe o preço de venda (R$): ");
        scanf("%f", &preco_venda);

        if (preco_compra <= 0.0f) {
            printf("Preço de compra inválido.\n");
        } else {
            lucro_valor = preco_venda - preco_compra;
            lucro_percentual = (lucro_valor / preco_compra) * 100.0f;

            if (lucro_percentual <= 10.0f) {
                qtd_ate_10++;
            } else if (lucro_percentual <= 30.0f) {
                qtd_10_a_30++;
            } else if (lucro_percentual <= 50.0f) {
                qtd_30_a_50++;
            } else {
                qtd_acima_50++;
            }

            total_compras = total_compras + preco_compra;
            total_vendas = total_vendas + preco_venda;
            total_lucro = total_lucro + lucro_valor;

            printf("\nResultado da mercadoria:\n");
            printf("Mercadoria: %s\n", nome);
            printf("Percentual de lucro: %.2f%%\n\n", lucro_percentual);
        }

        printf("Deseja cadastrar outra mercadoria? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("\nResumo final:\n");
    printf("Quantidade com lucro de até 10%%: %d\n", qtd_ate_10);
    printf("Quantidade com lucro acima de 10%% até 30%%: %d\n", qtd_10_a_30);
    printf("Quantidade com lucro acima de 30%% até 50%%: %d\n", qtd_30_a_50);
    printf("Quantidade com lucro acima de 50%%: %d\n", qtd_acima_50);
    printf("Total de compras: R$ %.2f\n", total_compras);
    printf("Total de vendas: R$ %.2f\n", total_vendas);
    printf("Total de lucro: R$ %.2f\n", total_lucro);

    getch();
}