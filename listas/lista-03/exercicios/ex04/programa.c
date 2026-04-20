#include <stdio.h>
#include <conio.h>

int main() {
    float salario_minimo;
    float quantidade_quilowatts;
    float valor_quilowatt;
    float valor_a_pagar;
    float valor_com_desconto;
    float valor_com_acrescimo;

    printf("Informe valor do salário mínimo em R$: ");
    scanf("%f", &salario_minimo);
    printf("Informe quantidade de quilowatts gasta pela residência: ");
    scanf("%f", &quantidade_quilowatts);
    valor_quilowatt = salario_minimo / 1000;
    valor_a_pagar = valor_quilowatt * quantidade_quilowatts;
    valor_com_desconto = valor_a_pagar - (valor_a_pagar * 8 / 100);
    valor_com_acrescimo = valor_a_pagar + (valor_a_pagar * 10 / 100);
    printf("Valor de cada quilowatt: R$ %.2f\n", valor_quilowatt);
    printf("Valor a ser pago: R$ %.2f\n", valor_a_pagar);
    printf("Valor com desconto de 8%% por pagamento antecipado: R$ %.2f\n", valor_com_desconto);
    printf("Valor com acréscimo de 10%% por pagamento em atraso: R$ %.2f\n", valor_com_acrescimo);

    getch();
}
