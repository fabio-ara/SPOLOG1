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
    float notas[10], soma, media;
    int i;

    preparar_console_utf8();

    soma = 0.0f;
    i = 0;

    while (i < 10) {
        printf("Informe a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
        i++;
    }

    printf("\nNotas inseridas:\n");
    i = 0;
    while (i < 10) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
        i++;
    }

    media = soma / 10.0f;
    printf("\nMédia aritmética: %.2f\n", media);

    if (media >= 8.0f) {
        printf("Resultado: Plenamente Satisfatório (PS)\n");
    } else if (media >= 6.0f) {
        printf("Resultado: Satisfatório (S)\n");
    } else if (media >= 4.0f) {
        printf("Resultado: Regular (R)\n");
    } else {
        printf("Resultado: Insatisfatório (I)\n");
    }

    getch();
}