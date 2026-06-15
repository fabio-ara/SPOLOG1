algoritmo "temperaturas_fahrenheit_celsius"

var
   i: inteiro
   temperaturas_f: vetor[1..10] de real
   temperaturas_c: vetor[1..10] de real

inicio
   escreval("Informe as 10 temperaturas em graus Fahrenheit:")
   para i de 1 ate 10 faca
      escreva("Temperatura", i, " em Fahrenheit: ")
      leia(temperaturas_f[i])
      temperaturas_c[i] <- 5 * (temperaturas_f[i] - 32) / 9
   fimpara

   escreval("")
   escreval("Fahrenheit    Celsius")
   para i de 1 ate 10 faca
      escreval(temperaturas_f[i]:8:2, "    ", temperaturas_c[i]:8:2)
   fimpara
fimalgoritmo