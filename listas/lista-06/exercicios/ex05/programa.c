#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

static void preparar_console_utf8(void) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_CTYPE, ".UTF8");
}

int main() {
    int valores[5], soma, i;
    float media;

    preparar_console_utf8();

    soma = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma = soma + valores[i];
    }

    media = soma / 5.0f;

    printf("\nSoma dos valores: %d\n", soma);
    printf("Média dos valores: %.2f\n", media);

    printf("\nValores maiores que a média:\n");
    for (i = 0; i < 5; i++) {
        if (valores[i] > media) {
            printf("%d ", valores[i]);
        }
    }

    printf("\n\nValores menores que a média:\n");
    for (i = 0; i < 5; i++) {
        if (valores[i] < media) {
            printf("%d ", valores[i]);
        }
    }
    printf("\n");

    getch();
}