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
    int A[12], B[12], C[24];
    int i, j, valor;

    preparar_console_utf8();

    i = 0;
    do {
        do {
            printf("Informe A[%d] (divisível por 3 ou 7): ", i);
            scanf("%d", &valor);
            if ((valor % 3 != 0) && (valor % 7 != 0)) {
                printf("Valor inválido. Digite novamente.\n");
            }
        } while ((valor % 3 != 0) && (valor % 7 != 0));

        A[i] = valor;
        if (A[i] % 5 != 0) {
            B[i] = A[i];
        } else {
            B[i] = 0;
        }
        i++;
    } while (i < 12);

    i = 0;
    j = 0;
    do {
        C[j] = A[i];
        C[j + 12] = B[i];
        i++;
        j++;
    } while (i < 12);

    printf("\nVetor A:\n");
    i = 0;
    do {
        printf("%d ", A[i]);
        i++;
    } while (i < 12);

    printf("\n\nVetor B:\n");
    i = 0;
    do {
        printf("%d ", B[i]);
        i++;
    } while (i < 12);

    printf("\n\nVetor C:\n");
    i = 0;
    do {
        printf("%d ", C[i]);
        i++;
    } while (i < 24);
    printf("\n");

    getch();
}