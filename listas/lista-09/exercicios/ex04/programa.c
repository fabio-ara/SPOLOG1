#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Funcionario {
    char nome[60], rg[20], estadoCivil[20], telefone[20];
    int idade;
    float salario;
};

void exibirCadastro(struct Funcionario funcionario) {
    printf("Nome: %s\n", funcionario.nome);
    printf("RG: %s\n", funcionario.rg);
    printf("Idade: %d\n", funcionario.idade);
    printf("Estado civil: %s\n", funcionario.estadoCivil);
    printf("Telefone: %s\n", funcionario.telefone);
    printf("Salario: %.2f\n", funcionario.salario);
}

int ehSolteiro(char estadoCivil[]) {
    if(strcmp(estadoCivil, "solteiro") == 0 || strcmp(estadoCivil, "Solteiro") == 0) {
        return 1;
    }
    if(strcmp(estadoCivil, "solteira") == 0 || strcmp(estadoCivil, "Solteira") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    struct Funcionario funcionarios[5], aux;
    int i, j, indiceMaisVelho = 0;
    int encontrouSolteiro = 0, encontrouSalario = 0;

    for(i = 0; i < 5; i++) {
        fflush(stdin);
        printf("\nCadastro do funcionario %d\n", i + 1);
        printf("Nome: ");
        gets(funcionarios[i].nome);
        printf("RG: ");
        gets(funcionarios[i].rg);
        printf("Idade: ");
        scanf("%d", &funcionarios[i].idade);
        while(getchar() != '\n');
        printf("Estado civil: ");
        gets(funcionarios[i].estadoCivil);
        printf("Telefone: ");
        gets(funcionarios[i].telefone);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
        while(getchar() != '\n');

        if(funcionarios[i].idade > funcionarios[indiceMaisVelho].idade) {
            indiceMaisVelho = i;
        }
    }

    printf("\nCadastro da pessoa com maior idade:\n");
    exibirCadastro(funcionarios[indiceMaisVelho]);

    printf("\n------------------------------------------------------------\n");
    printf("Cadastros dos solteiros:\n");
    for(i = 0; i < 5; i++) {
        if(ehSolteiro(funcionarios[i].estadoCivil)) {
            printf("\nFuncionario %d\n", i + 1);
            exibirCadastro(funcionarios[i]);
            encontrouSolteiro = 1;
        }
    }
    if(encontrouSolteiro == 0) {
        printf("Nao ha solteiros cadastrados.\n");
    }

    printf("\n------------------------------------------------------------\n");
    printf("Cadastros com salario superior a 8000:\n");
    for(i = 0; i < 5; i++) {
        if(funcionarios[i].salario > 8000) {
            printf("\nFuncionario %d\n", i + 1);
            exibirCadastro(funcionarios[i]);
            encontrouSalario = 1;
        }
    }
    if(encontrouSalario == 0) {
        printf("Nao ha salarios superiores a 8000.\n");
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(funcionarios[i].nome, funcionarios[j].nome) > 0) {
                aux = funcionarios[i];
                funcionarios[i] = funcionarios[j];
                funcionarios[j] = aux;
            }
        }
    }

    printf("\n------------------------------------------------------------\n");
    printf("Cadastros em ordem alfabetica:\n");
    for(i = 0; i < 5; i++) {
        printf("\nFuncionario %d\n", i + 1);
        exibirCadastro(funcionarios[i]);
    }
    printf("------------------------------------------------------------\n");
    getch();
}
