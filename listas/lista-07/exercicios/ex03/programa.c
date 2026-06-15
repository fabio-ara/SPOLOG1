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
    int medicamentos[5][3];
    int contagem[5] = {0};
    char *nomes[5] = {"Analgésicos", "anti-inflamatório", "antidepressivo", "vitaminas", "outros"};
    int i, j, codigo, maisConsumido = 0;

    preparar_console_utf8();

    printf("CONTROLE DE MEDICAMENTOS DO HOSPITAL\n");
    printf("===================================\n\n");
    printf("Legenda dos códigos:\n");
    for(i = 0; i < 5; i++) {
        printf("%d - %s\n", i + 1, nomes[i]);
    }
    printf("\nInforme os medicamentos aplicados a cada paciente.\n");
    for(i = 0; i < 5; i++) {
        printf("\nPaciente %d\n", i + 1);
        printf("----------\n");
        for(j = 0; j < 3; j++) {
            do {
                printf("Aplicação %d - digite o código do medicamento (1 a 5): ", j + 1);
                scanf("%d", &codigo);
                if(codigo < 1 || codigo > 5) {
                    printf("Código inválido. Informe um valor de 1 a 5.\n");
                }
            } while(codigo < 1 || codigo > 5);

            medicamentos[i][j] = codigo;
            contagem[codigo - 1]++;
        }
    }

    for(i = 1; i < 5; i++) {
        if(contagem[i] > contagem[maisConsumido]) {
            maisConsumido = i;
        }
    }

    printf("\n\nRESUMO DOS MEDICAMENTOS REGISTRADOS\n");
    printf("==================================\n");
    printf("%-12s %-12s %-12s %-12s\n", "Paciente", "Aplicação 1", "Aplicação 2", "Aplicação 3");
    for(i = 0; i < 5; i++) {
        printf("%-12d %-12d %-12d %-12d\n", i + 1, medicamentos[i][0], medicamentos[i][1], medicamentos[i][2]);
    }

    printf("\nMedicamento mais consumido: %s\n", nomes[maisConsumido]);
    printf("Quantidade de aplicações: %d\n", contagem[maisConsumido]);

    getch();
}