#include <stdio.h>
#include <conio.h>

int main() {
    int op;
    float pterra, pesoplaneta;

    printf("Planetas que podem ser analisados:\n");
    printf("-----------------------------------------\n");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    printf("-----------------------------------------\n");
    printf("Informe o planeta a ser analisado: ");
    scanf("%d", &op);
    printf("Entre com um peso da Terra (kg): ");
    scanf("%f", &pterra);

    switch(op) {
        case 1:
            pesoplaneta = (pterra / 10) * 0.37;
            printf("Seu peso em Mercurio e: %.2f kg\n", pesoplaneta);
            break;
        case 2:
            pesoplaneta = (pterra / 10) * 0.88;
            printf("Seu peso em Venus e: %.2f kg\n", pesoplaneta);
            break;
        case 3:
            pesoplaneta = (pterra / 10) * 0.38;
            printf("Seu peso em Marte e: %.2f kg\n", pesoplaneta);
            break;
        case 4:
            pesoplaneta = (pterra / 10) * 2.64;
            printf("Seu peso em Jupiter e: %.2f kg\n", pesoplaneta);
            break;
        case 5:
            pesoplaneta = (pterra / 10) * 1.15;
            printf("Seu peso em Saturno e: %.2f kg\n", pesoplaneta);
            break;
        case 6:
            pesoplaneta = (pterra / 10) * 1.17;
            printf("Seu peso em Urano e: %.2f kg\n", pesoplaneta);
            break;
        default:
            printf("Este planeta nao pode ser analisado (Opcao invalida).\n");
    }

    printf("-----------------------------------------\n");
    getch();
}
