algoritmo "media_percentuais"

var
   quantidade, indice, positivos, negativos: inteiro
   valor, soma, media, percentual_positivos, percentual_negativos: real

inicio
   escreva("Informe a quantidade de valores: ")
   leia(quantidade)
   se quantidade <= 0 entao
      escreval("A quantidade deve ser maior que zero.")
   senao
      soma <- 0
      positivos <- 0
      negativos <- 0
      para indice de 1 ate quantidade faca
         escreva("Informe o valor ", indice, ": ")
         leia(valor)
         soma <- soma + valor
         se valor > 0 entao
            positivos <- positivos + 1
         senao
            se valor < 0 entao
               negativos <- negativos + 1
            fimse
         fimse
      fimpara
      media <- soma / quantidade
      percentual_positivos <- positivos * 100 / quantidade
      percentual_negativos <- negativos * 100 / quantidade
      escreval("A média aritmética é: ", media:1:2)
      escreval("Quantidade de valores positivos: ", positivos)
      escreval("Percentual de valores positivos: ", percentual_positivos:1:2, "%")
      escreval("Quantidade de valores negativos: ", negativos)
      escreval("Percentual de valores negativos: ", percentual_negativos:1:2, "%")
   fimse
fimalgoritmo