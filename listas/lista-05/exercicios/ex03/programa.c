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
    int continente, turista;
    int total_america_norte, total_america_central, total_america_sul;
    int total_europa, total_asia, total_africa, total_oceania;
    float percentual_america_sul;

    total_america_norte = 0;
    total_america_central = 0;
    total_america_sul = 0;
    total_europa = 0;
    total_asia = 0;
    total_africa = 0;
    total_oceania = 0;

    preparar_console_utf8();

    printf("Tabela de continentes:\n");
    printf("1 - América do Norte\n");
    printf("2 - América Central\n");
    printf("3 - América do Sul\n");
    printf("4 - Europa\n");
    printf("5 - Ásia\n");
    printf("6 - África\n");
    printf("7 - Oceania\n\n");

    for (turista = 1; turista <= 20; turista++) {
        do {
            printf("Turista %d - informe o código do continente de origem (1 a 7): ", turista);
            scanf("%d", &continente);

            if (continente < 1 || continente > 7) {
                printf("Código de continente inválido. Use um valor de 1 a 7 conforme a tabela.\n");
            }
        } while (continente < 1 || continente > 7);

        switch (continente) {
            case 1:
                total_america_norte++;
                break;
            case 2:
                total_america_central++;
                break;
            case 3:
                total_america_sul++;
                break;
            case 4:
                total_europa++;
                break;
            case 5:
                total_asia++;
                break;
            case 6:
                total_africa++;
                break;
            default:
                total_oceania++;
        }
    }

    percentual_america_sul = total_america_sul * 100.0f / 20.0f;

    printf("Total da América do Norte: %d\n", total_america_norte);
    printf("Total da América Central: %d\n", total_america_central);
    printf("Total da América do Sul: %d\n", total_america_sul);
    printf("Total da Europa: %d\n", total_europa);
    printf("Total da Ásia: %d\n", total_asia);
    printf("Total da África: %d\n", total_africa);
    printf("Total da Oceania: %d\n", total_oceania);
    printf("Percentual de turistas da América do Sul: %.2f%%\n", percentual_america_sul);

    getch();
}