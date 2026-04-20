algoritmo "reajuste_salarial"

var
   salario_anterior, percentual_reajuste, valor_reajuste, novo_salario: real

inicio
   escreva("Informe o salário anterior em R$: ")
   leia(salario_anterior)
   se salario_anterior <= 1450.00 entao
      percentual_reajuste <- 12.00
   senao
      se salario_anterior <= 3240.00 entao
         percentual_reajuste <- 8.50
      senao
         percentual_reajuste <- 3.25
      fimse
   fimse
   valor_reajuste <- salario_anterior * percentual_reajuste / 100
   novo_salario <- salario_anterior + valor_reajuste
   escreval("Seu salário anterior era: R$ ", salario_anterior:1:2)
   escreval("O valor do seu reajuste foi de: R$ ", valor_reajuste:1:2)
   escreval("Seu novo salário é: R$ ", novo_salario:1:2)
fimalgoritmo