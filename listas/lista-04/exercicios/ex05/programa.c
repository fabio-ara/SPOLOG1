#include <stdio.h>
#include <conio.h>

int main() {
    int HE, ME, HS, MS;
    int entrada_minutos, saida_minutos, duracao_minutos, horas_cobradas;
    float PAG;

    printf("Informe o horário de entrada no formato hh:mm: ");
    scanf("%d:%d", &HE, &ME);
    printf("Informe o horário de saída no formato hh:mm: ");
    scanf("%d:%d", &HS, &MS);

    if (HE < 0 || HE > 23 || HS < 0 || HS > 23 || ME < 0 || ME > 59 || MS < 0 || MS > 59) {
        printf("Horário inválido. Horas devem estar entre 0 e 23 e minutos entre 0 e 59.\n");
    } else {
        entrada_minutos = HE * 60 + ME;
        saida_minutos = HS * 60 + MS;

        if (saida_minutos <= entrada_minutos) {
            saida_minutos = saida_minutos + 24 * 60;
        }

        duracao_minutos = saida_minutos - entrada_minutos;
        horas_cobradas = duracao_minutos / 60;

        if (duracao_minutos % 60 != 0) {
            horas_cobradas = horas_cobradas + 1;
        }

        if (horas_cobradas == 1) {
            PAG = 4.00;
        } else if (horas_cobradas == 2) {
            PAG = 6.00;
        } else {
            PAG = 6.00 + (horas_cobradas - 2) * 1.00;
        }

        printf("Horas cobradas: %d\n", horas_cobradas);
        printf("Valor a ser pago: R$ %.2f\n", PAG);
    }

    getch();
}