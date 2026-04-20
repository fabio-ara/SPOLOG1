algoritmo "soma_n_a_partir_de_a"

var
   A, N, contador, atual: inteiro

inicio
   escreva("Informe o valor de A: ")
   leia(A)
   escreva("Informe o valor de N: ")
   leia(N)
   enquanto N <= 0 faca
      escreval("N deve ser maior que zero.")
      escreva("Informe um novo valor para N: ")
      leia(N)
   fimenquanto
   contador <- 0
   atual <- A
   escreva("Soma: ")
   enquanto contador < N faca
      se contador > 0 entao
         escreva(" + ")
      fimse
      escreva(atual)
      atual <- atual + 1
      contador <- contador + 1
   fimenquanto
   escreval("")
fimalgoritmo