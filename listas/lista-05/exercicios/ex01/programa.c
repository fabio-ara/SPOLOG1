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
    float nota1, nota2, media_final;
    char conceito;

    preparar_console_utf8();

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media_final = (nota1 + nota2) / 2.0f;

    if (media_final >= 8.0f) {
        conceito = 'A';
    } else if (media_final >= 7.0f) {
        conceito = 'B';
    } else if (media_final >= 6.0f) {
        conceito = 'C';
    } else if (media_final >= 5.0f) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("A média final do aluno é: %.2f\n", media_final);
    printf("O conceito final do aluno é: %c\n", conceito);

    getch();
}