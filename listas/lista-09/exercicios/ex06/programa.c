#include <stdio.h>
#include <conio.h>

long long int calcularFatorial(int n) {
    int i;
    long long int fatorial = 1;

    for(i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else if(n > 20) {
        printf("Para este programa, informe um numero entre 0 e 20.\n");
        printf("Acima de 20, o resultado ultrapassa o limite do tipo long long int.\n");
    } else {
        printf("Fatorial de %d = %lld\n", n, calcularFatorial(n));
    }

    getch();
}
