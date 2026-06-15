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
    int minutos, minutos_excedentes, blocos_cinco, minutos_restantes;
    float valor_pagar;

    preparar_console_utf8();

    printf("Informe a quantidade de minutos da ligação: ");
    scanf("%d", &minutos);

    if (minutos <= 0) {
        printf("Quantidade de minutos inválida.\n");
    } else {
        valor_pagar = 3.00f;

        if (minutos > 3) {
            minutos_excedentes = minutos - 3;
            blocos_cinco = minutos_excedentes / 5;
            minutos_restantes = minutos_excedentes % 5;
            valor_pagar = valor_pagar + blocos_cinco * 1.50f + minutos_restantes * 0.25f;
        }

        printf("O valor a ser pago pela ligação é: R$ %.2f\n", valor_pagar);
    }

    getch();
}