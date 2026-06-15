#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    struct Livros {
        char titulo[80];
        int anoEdicao, numeroPaginas;
        float preco;
    };
    struct Livros livros[5];
    int count;
    int somaPaginas = 0;
    int indiceMaisBarato = 0;
    float mediaPaginas;

    for(count = 0; count < 5; count++) {
        fflush(stdin);
        printf("\nTitulo do livro %d: ", count + 1);
        gets(livros[count].titulo);
        printf("Ano de edicao: ");
        scanf("%d", &livros[count].anoEdicao);
        printf("Numero de paginas: ");
        scanf("%d", &livros[count].numeroPaginas);
        printf("Preco: ");
        scanf("%f", &livros[count].preco);
        while(getchar() != '\n');
        somaPaginas = somaPaginas + livros[count].numeroPaginas;
    }

    for(count = 1; count < 5; count++) {
        if(livros[count].preco < livros[indiceMaisBarato].preco) {
            indiceMaisBarato = count;
        }
    }

    mediaPaginas = somaPaginas / 5.0;

    printf("\nExibindo dados dos livros:\n");
    for(count = 0; count < 5; count++) {
        printf("\nLivro %d\n", count + 1);
        printf("Titulo: %s\n", livros[count].titulo);
        printf("Ano de edicao: %d\n", livros[count].anoEdicao);
        printf("Numero de paginas: %d\n", livros[count].numeroPaginas);
        printf("Preco: %.2f\n", livros[count].preco);
    }

    printf("\n------------------------------------------------------------\n");
    printf("Media do numero de paginas: %.2f\n", mediaPaginas);
    printf("Livro mais barato: %s\n", livros[indiceMaisBarato].titulo);
    printf("Preco do livro mais barato: %.2f\n", livros[indiceMaisBarato].preco);
    printf("------------------------------------------------------------\n");
    getch();
}