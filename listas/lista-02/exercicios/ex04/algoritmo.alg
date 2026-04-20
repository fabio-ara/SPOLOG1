algoritmo "serie_numeros"

var
   numero, primeiro_numero, maior_numero, menor_numero, repeticoes_primeiro: inteiro

inicio
   escreva("Informe o primeiro numero inteiro positivo: ")
   leia(primeiro_numero)
   enquanto primeiro_numero <= 0 faca
      escreval("O primeiro numero deve ser inteiro positivo.")
      escreva("Informe o primeiro numero inteiro positivo: ")
      leia(primeiro_numero)
   fimenquanto

   maior_numero <- primeiro_numero
   menor_numero <- primeiro_numero
   repeticoes_primeiro <- 1

   repita
      escreva("Informe o proximo numero inteiro positivo ou -1 para encerrar: ")
      leia(numero)

      se numero > 0 entao
         se numero = primeiro_numero entao
            repeticoes_primeiro <- repeticoes_primeiro + 1
         fimse

         se numero > maior_numero entao
            maior_numero <- numero
         fimse

         se numero < menor_numero entao
            menor_numero <- numero
         fimse
      senao
         se numero <> -1 entao
            escreval("Numero invalido.")
         fimse
      fimse
   ate numero = -1

   escreval("Maior numero digitado: ", maior_numero)
   escreval("Menor numero digitado: ", menor_numero)
   escreval("Quantidade de vezes que o primeiro numero foi digitado: ", repeticoes_primeiro)
fimalgoritmo
