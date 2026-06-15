#include <stdio.h>
#include <conio.h>

void mostrarSomaEntreNumeros(int num1, int num2) {
    int inicio, fim, i, soma = 0, quantidade = 0;

    if(num1 < num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }

    for(i = inicio + 1; i < fim; i++) {
        soma = soma + i;
        quantidade++;
    }

    if(quantidade == 0) {
        printf("Nao existem numeros inteiros entre %d e %d.\n", num1, num2);
    } else {
        printf("Soma dos inteiros entre %d e %d:\n", num1, num2);

        for(i = inicio + 1; i < fim; i++) {
            if(i > inicio + 1) {
                printf(" + ");
            }

            printf("%d", i);
        }

        printf(" = %d\n", soma);
    }
}

int main() {
    int numero1, numero2;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numero2);

    mostrarSomaEntreNumeros(numero1, numero2);

    getch();
}
