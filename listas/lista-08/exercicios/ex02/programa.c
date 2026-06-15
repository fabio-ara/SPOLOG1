#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    struct Carros {
        char marca[30], modelo[40];
        int anoFabricacao;
        float oferta1, oferta2, oferta3, media;
    };
    struct Carros carros[10];
    int count;
    int indiceMaiorOferta = 0;
    float maiorOferta;

    for(count = 0; count < 10; count++) {
        fflush(stdin);
        printf("\nMarca do carro %d: ", count + 1);
        gets(carros[count].marca);
        printf("Modelo do carro %d: ", count + 1);
        gets(carros[count].modelo);
        printf("Ano de fabricacao: ");
        scanf("%d", &carros[count].anoFabricacao);
        printf("Oferta 1: ");
        scanf("%f", &carros[count].oferta1);
        printf("Oferta 2: ");
        scanf("%f", &carros[count].oferta2);
        printf("Oferta 3: ");
        scanf("%f", &carros[count].oferta3);
        while(getchar() != '\n');
        //calcular a media das ofertas de cada carro
        carros[count].media = (carros[count].oferta1 + carros[count].oferta2 + carros[count].oferta3) / 3;
    }

    maiorOferta = carros[0].oferta1;
    for(count = 0; count < 10; count++) {
        if(carros[count].oferta1 > maiorOferta) {
            maiorOferta = carros[count].oferta1;
            indiceMaiorOferta = count;
        }
        if(carros[count].oferta2 > maiorOferta) {
            maiorOferta = carros[count].oferta2;
            indiceMaiorOferta = count;
        }
        if(carros[count].oferta3 > maiorOferta) {
            maiorOferta = carros[count].oferta3;
            indiceMaiorOferta = count;
        }
    }

    printf("\nExibindo dados dos carros:\n");
    for(count = 0; count < 10; count++) {
        printf("\nCarro %d\n", count + 1);
        printf("Marca: %s\n", carros[count].marca);
        printf("Modelo: %s\n", carros[count].modelo);
        printf("Ano de fabricacao: %d\n", carros[count].anoFabricacao);
        printf("Oferta 1: %.2f\n", carros[count].oferta1);
        printf("Oferta 2: %.2f\n", carros[count].oferta2);
        printf("Oferta 3: %.2f\n", carros[count].oferta3);
        printf("Media: %.2f\n", carros[count].media);
    }

    printf("\n------------------------------------------------------------\n");
    printf("Maior oferta entre todas: %.2f\n", maiorOferta);
    printf("Carro da maior oferta: %s %s\n", carros[indiceMaiorOferta].marca, carros[indiceMaiorOferta].modelo);
    printf("------------------------------------------------------------\n");
    getch();
}