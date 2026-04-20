algoritmo "ordem_decrescente"

var
   numero_a, numero_b, numero_c, auxiliar: inteiro

inicio
   escreval("Os próximos três números informados serão exibidos em ordem decrescente.")
   escreva("Informe o primeiro número inteiro: ")
   leia(numero_a)
   escreva("Informe o segundo número inteiro: ")
   leia(numero_b)
   escreva("Informe o terceiro número inteiro: ")
   leia(numero_c)
   se numero_a < numero_b entao
      auxiliar <- numero_a
      numero_a <- numero_b
      numero_b <- auxiliar
   fimse
   se numero_a < numero_c entao
      auxiliar <- numero_a
      numero_a <- numero_c
      numero_c <- auxiliar
   fimse
   se numero_b < numero_c entao
      auxiliar <- numero_b
      numero_b <- numero_c
      numero_c <- auxiliar
   fimse
   escreval("Os números em ordem decrescente são: ", numero_a, ", ", numero_b, ", ", numero_c)
fimalgoritmo