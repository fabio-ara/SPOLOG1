algoritmo "estacionamento"

var
   // HE = hora de entrada, ME = minuto de entrada, HS = hora de saída, MS = minuto de saída
   HE, ME, HS, MS: inteiro
   // MT = minutos totais e HC = horas cobradas
   MT, HC: inteiro
   // PAG = valor a ser pago
   PAG: real

inicio
   escreval("Atenção: este cálculo considera apenas intervalos dentro do mesmo dia.")
   escreva("Informe a hora de entrada: ")
   leia(HE)
   escreva("Informe o minuto de entrada: ")
   leia(ME)
   escreva("Informe a hora de saída: ")
   leia(HS)
   escreva("Informe o minuto de saída: ")
   leia(MS)
   se (HE < 0) ou (HE > 23) ou (HS < 0) ou (HS > 23) entao
      escreval("Horário inválido. As horas devem estar entre 0 e 23.")
   senao
      se (ME < 0) ou (ME > 59) ou (MS < 0) ou (MS > 59) entao
         escreval("Horário inválido. Os minutos devem estar entre 0 e 59.")
      senao
         MT <- (HS * 60 + MS) - (HE * 60 + ME)
         se MT < 0 entao
            escreval("Horário de saída inválido. Ele deve ser posterior ao horário de entrada.")
         senao
            HC <- MT div 60
            se MT mod 60 > 0 entao
               HC <- HC + 1
            fimse
            se HC <= 0 entao
               HC <- 1
            fimse
            se HC = 1 entao
               PAG <- 4.00
            senao
               se HC = 2 entao
                  PAG <- 6.00
               senao
                  PAG <- 6.00 + (HC - 2) * 1.00
               fimse
            fimse
            escreval("O valor a ser pago é: R$ ", PAG:1:2)
         fimse
      fimse
   fimse
fimalgoritmo