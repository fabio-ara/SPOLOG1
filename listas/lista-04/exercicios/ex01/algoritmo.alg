algoritmo "estado_civil_20_pessoas"

var
   pessoa, casados, solteiros, viuvos, outros: inteiro
   percentual_casados, percentual_solteiros: real
   estado_civil: caractere

inicio
   casados <- 0
   solteiros <- 0
   viuvos <- 0
   outros <- 0

   escreval("Informe, a seguir, o estado civil de 20 pessoas.")
   escreval("Opções: casado(a), solteiro(a), viúvo(a) ou outros.)")

   para pessoa de 1 ate 20 faca
      leia(estado_civil)
      se (estado_civil = "casado") ou (estado_civil = "casada") entao
         casados <- casados + 1
      senao
         se (estado_civil = "solteiro") ou (estado_civil = "solteira") entao
            solteiros <- solteiros + 1
         senao
            se (estado_civil = "viúvo") ou (estado_civil = "viuvo") ou (estado_civil = "viúva") ou (estado_civil = "viuva") entao
               viuvos <- viuvos + 1
            senao
               outros <- outros + 1
            fimse
         fimse
      fimse
   fimpara

   percentual_casados <- casados * 100 / 20
   percentual_solteiros <- solteiros * 100 / 20

   escreval("Quantidade de casado(a)s: ", casados)
   escreval("Quantidade de solteiro(a)s: ", solteiros)
   escreval("Quantidade de viúvo(a)s: ", viuvos)
   escreval("Quantidade de outros: ", outros)
   escreval("Percentual de casado(a)s: ", percentual_casados:1:2, "%")
   escreval("Percentual de solteiro(a)s: ", percentual_solteiros:1:2, "%")
fimalgoritmo