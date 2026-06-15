#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    struct Alunos {
        char nome[30];
        float matematica, fisica, media;
    };
    struct Alunos alunos[5];
    int count;
    int acimaDe6 = 0;

    for(count = 0; count < 5; count++) {
        fflush(stdin);
        printf("\nNome do aluno %d: ", count + 1);
        gets(alunos[count].nome);
        printf("Nota de matematica: ");
        scanf("%f", &alunos[count].matematica);
        printf("Nota de fisica: ");
        scanf("%f", &alunos[count].fisica);
        while(getchar() != '\n');
        //calcular aas medias de cada aluno
        alunos[count].media = (alunos[count].matematica + alunos[count].fisica) / 2;
        if(alunos[count].media > 6) {
            acimaDe6++;
        }
    }
    printf("\nExibindo nomes e medias:\n");
    for(count = 0; count < 5; count++) {
        printf("\nAluno %d\n", count + 1);
        printf("Nome: %s\n", alunos[count].nome);
        printf("Media: %.2f\n", alunos[count].media);
    }
    //calcular e exibir o percentual de alunos com medias acima de 6
    printf("\n------------------------------------------------------------\n");
    printf("Percentual de alunos com medias acima de 6: %.2f%%\n", (acimaDe6 * 100.0) / 5);
    printf("------------------------------------------------------------\n");
    getch();
}