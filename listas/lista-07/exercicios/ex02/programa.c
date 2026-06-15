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
    int tempo[10], melhor, pior, posmelhor = 0, pospior = 0;

    preparar_console_utf8();

    // Leitura dos tempos
    for(int i = 0; i < 10; i++) {
        printf("Digite o tempo nº %d: ", i + 1);
        scanf("%d", &tempo[i]);
    }

    // Verificar o melhor, o pior tempo e suas posições no vetor:
    melhor = tempo[0];
    pior = tempo[0];

    for(int i = 1; i < 10; i++) {
        if(tempo[i] < melhor) {
            melhor = tempo[i];
            posmelhor = i;
        }
        if(tempo[i] > pior) {
            pior = tempo[i];
            pospior = i;
        }
    }

    printf("\nRESULTADOS ----------------\n");
    //tempos digitados:
    for(int i = 0; i < 10; i++) {
        printf("Corredor %d: %d s\n", i + 1, tempo[i]);
    }

    printf("------------------------------\n");
    printf("Melhor tempo: %4.d (no indice %d)\n", melhor, posmelhor);
    printf("Pior tempo..: %4.d (no indice %d)\n", pior, pospior);

    getch();
}