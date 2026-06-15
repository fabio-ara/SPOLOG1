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
    int pessoa, sexo, qtd_mulheres, qtd_homens, indice, total_pessoas;
    int altura_valida, sexo_valido;
    float altura, maior_altura, menor_altura, soma_mulheres, soma_populacao;
    float media_mulheres, media_populacao, percentual_homens;
    char repetir;
    char entrada_altura[64], entrada_sexo[32], sobra[32];

    preparar_console_utf8();
    /* ENTREGA_REPLACE_NEXT: total_pessoas = 50; */
    total_pessoas = 5;

    do {
        qtd_mulheres = 0;
        qtd_homens = 0;
        soma_mulheres = 0.0f;
        soma_populacao = 0.0f;

        printf("Pesquisa com %d pessoas.\n\n", total_pessoas);

        for (pessoa = 1; pessoa <= total_pessoas; pessoa++) {
            do {
                printf("Pessoa %d - informe a altura (em m): ", pessoa);
                scanf(" %63s", entrada_altura);

                for (indice = 0; entrada_altura[indice] != 0; indice++) {
                    if (entrada_altura[indice] == 44) {
                        entrada_altura[indice] = 46;
                    }
                }

                altura_valida = 1;

                if (sscanf(entrada_altura, "%f%31s", &altura, sobra) != 1) {
                    altura_valida = 0;
                } else if (altura < 0.50f || altura > 2.50f) {
                    altura_valida = 0;
                }

                if (!altura_valida) {
                    printf("Altura inválida. Informe um valor em metros entre 0,50 e 2,50.\n");
                }
            } while (!altura_valida);

            do {
                printf("Pessoa %d - informe o sexo (0 para masc, 1 para fem): ", pessoa);
                scanf(" %31s", entrada_sexo);

                sexo_valido = 1;

                if (sscanf(entrada_sexo, "%d%31s", &sexo, sobra) != 1) {
                    sexo_valido = 0;
                } else if (sexo != 0 && sexo != 1) {
                    sexo_valido = 0;
                }

                if (!sexo_valido) {
                    printf("Código de sexo inválido. Use 0 para masculino ou 1 para feminino.\n");
                }
            } while (!sexo_valido);

            if (pessoa == 1) {
                maior_altura = altura;
                menor_altura = altura;
            } else {
                if (altura > maior_altura) {
                    maior_altura = altura;
                }
                if (altura < menor_altura) {
                    menor_altura = altura;
                }
            }

            soma_populacao = soma_populacao + altura;

            if (sexo == 1) {
                qtd_mulheres++;
                soma_mulheres = soma_mulheres + altura;
            } else {
                qtd_homens++;
            }
        }

        media_populacao = soma_populacao / total_pessoas;

        if (qtd_mulheres > 0) {
            media_mulheres = soma_mulheres / qtd_mulheres;
        } else {
            media_mulheres = 0.0f;
        }

        percentual_homens = qtd_homens * 100.0f / total_pessoas;

        printf("\nResumo da pesquisa:\n");
        printf("Maior altura encontrada: %.2f m\n", maior_altura);
        printf("Menor altura encontrada: %.2f m\n", menor_altura);
        printf("Média de altura das mulheres: %.2f m\n", media_mulheres);
        printf("Média de altura da população: %.2f m\n", media_populacao);
        printf("Percentual de homens na população: %.2f%%\n", percentual_homens);

        printf("Deseja repetir o processamento? (S/N): ");
        scanf(" %c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    getch();
}