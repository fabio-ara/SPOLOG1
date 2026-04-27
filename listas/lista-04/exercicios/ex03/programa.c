#include <stdio.h>
#include <conio.h>

int main() {
    float peso, altura, imc;

    printf("Informe o peso em kg: ");
    scanf("%f", &peso);
    printf("Informe a altura em metros: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura inválida.\n");
    } else {
        imc = peso / (altura * altura);

        printf("Peso digitado: %.2f kg\n", peso);
        printf("IMC calculado: %.2f\n", imc);

        if (imc <= 18.5) {
            printf("Classificação: baixo peso\n");
        } else if (imc <= 24.9) {
            printf("Classificação: eutrofia (peso adequado)\n");
        } else if (imc <= 29.9) {
            printf("Classificação: sobrepeso\n");
        } else if (imc <= 34.9) {
            printf("Classificação: obesidade grau 1\n");
        } else if (imc <= 39.9) {
            printf("Classificação: obesidade grau 2\n");
        } else {
            printf("Classificação: obesidade extrema\n");
        }
    }

    getch();
}