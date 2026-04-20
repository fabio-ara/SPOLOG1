#include <stdio.h>
#include <conio.h>

int main() {
    int peso_quilograma;
    int peso_gramas;
    int novo_peso_gramas;

    printf("Informe peso da pessoa em quilogramas (kg): ");
    scanf("%d", &peso_quilograma);
    peso_gramas = peso_quilograma * 1000;
    novo_peso_gramas = peso_gramas + (peso_gramas * 15 / 100);
    printf("Peso da pessoa em gramas: %d g\n", peso_gramas);
    printf("Novo peso em gramas com aumento de 15%%: %d g\n", novo_peso_gramas);

    getch();
}
