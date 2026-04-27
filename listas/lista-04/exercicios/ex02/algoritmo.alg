algoritmo "controle_de_tarefas"

var
   dia, tarefa: inteiro

inicio

   dia <- 1

   enquanto dia <= 6 faca
      escreva("(", dia, ", ")
      tarefa <- 1

      enquanto tarefa <= 6 faca
         escreva(tarefa)

         se tarefa < 6 entao
            escreva(" ")
         fimse

         tarefa <- tarefa + 1
      fimenquanto

      escreval(")")

      dia <- dia + 1
   fimenquanto

fimalgoritmo