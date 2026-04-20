algoritmo "capacidade_represa"

var
   quantidade_litros: inteiro
   percentual_aumento: real
   percentual_reducao: real
   litros_chuva: real
   litros_seca: real
   mililitros_seca: real

inicio
   escreva("Informe quantidade de litros da represa: ")
   leia(quantidade_litros)
   percentual_aumento <- 0.34
   percentual_reducao <- 0.40
   litros_chuva <- quantidade_litros + (quantidade_litros * percentual_aumento)
   litros_seca <- quantidade_litros - (quantidade_litros * percentual_reducao)
   mililitros_seca <- litros_seca * 1000
   escreval("Total em litros após chuva: ", litros_chuva:1:2)
   escreval("Total em mililitros após seca: ", mililitros_seca:1:2)
fimalgoritmo
