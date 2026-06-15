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
    int numero;
    int faixa_0_25, faixa_26_50, faixa_51_75, faixa_76_100;

    faixa_0_25 = 0;
    faixa_26_50 = 0;
    faixa_51_75 = 0;
    faixa_76_100 = 0;

    preparar_console_utf8();

    printf("Informe um número (negativo para encerrar): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        if (numero <= 25) {
            faixa_0_25++;
        } else if (numero <= 50) {
            faixa_26_50++;
        } else if (numero <= 75) {
            faixa_51_75++;
        } else if (numero <= 100) {
            faixa_76_100++;
        } else {
            printf("Número inválido. Informe um valor entre 0 e 100, ou negativo para encerrar.\n");
        }

        printf("Informe um número (negativo para encerrar): ");
        scanf("%d", &numero);
    }

    printf("Quantidade no intervalo [0-25]: %d\n", faixa_0_25);
    printf("Quantidade no intervalo [26-50]: %d\n", faixa_26_50);
    printf("Quantidade no intervalo [51-75]: %d\n", faixa_51_75);
    printf("Quantidade no intervalo [76-100]: %d\n", faixa_76_100);

    getch();
}