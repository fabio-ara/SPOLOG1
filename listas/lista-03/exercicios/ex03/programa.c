#include <stdio.h>
#include <conio.h>

int main() {
    float tempo_gasto;
    float velocidade_media;
    float distancia_percorrida;
    float litros_usados;

    printf("Informe tempo gasto na viagem em horas: ");
    scanf("%f", &tempo_gasto);
    printf("Informe velocidade média da viagem em km/h: ");
    scanf("%f", &velocidade_media);
    distancia_percorrida = tempo_gasto * velocidade_media;
    litros_usados = distancia_percorrida / 12;
    printf("Velocidade média da viagem: %.2f km/h\n", velocidade_media);
    printf("Tempo gasto na viagem: %.2f h\n", tempo_gasto);
    printf("Distância percorrida: %.2f km\n", distancia_percorrida);
    printf("Quantidade de combustível utilizada na viagem: %.2f L\n", litros_usados);

    getch();
}
