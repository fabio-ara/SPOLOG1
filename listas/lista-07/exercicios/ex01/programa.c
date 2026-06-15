#include <stdio.h>
#include <conio.h>

int main() {
    float notas[5], soma = 0.0, media = 0.0;
    int i, acimaDaMedia = 0;
    // Leitura das notas
    for(i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        // calcular a soma das notas
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 5;

    // Contar/verificar quantos alunos ficaram acima da média
    for(i = 0; i < 5; i++) {
        if(notas[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("\nRESULTADOS\n----------------------------------------------\n");
    //Exibir todas as Notas digitadas
    for(i = 0; i < 5; i++) {
        printf("Nota do aluno %d: %.2f\n", i + 1, notas[i]);
    }

    printf("Media geral da turma: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", acimaDaMedia);

    getch();
}