algoritmo "registro_aluno"

var
   registro_aluno, idade_anos, idade_dias: inteiro
   ano_nascimento, bissextos_ate_2025, bissextos_antes_nasc, bissextos_periodo: inteiro
   nome_aluno: caractere

inicio
   escreva("Informe o número de registro do aluno: ")
   leia(registro_aluno)
   nome_aluno <- ""
   idade_anos <- 0
   escolha registro_aluno
      caso 1
         nome_aluno <- "Luiz Silva"
         idade_anos <- 15
      caso 2
         nome_aluno <- "Carlos Santos"
         idade_anos <- 19
      caso 3
         nome_aluno <- "Ana Oliveira"
         idade_anos <- 25
      caso 4
         nome_aluno <- "Thiago Ferreira"
         idade_anos <- 28
      outrocaso
         escreval("Registro inválido.")
   fimescolha
   se idade_anos > 0 entao
      ano_nascimento <- 2026 - idade_anos
      bissextos_ate_2025 <- 2025 div 4 - 2025 div 100 + 2025 div 400
      bissextos_antes_nasc <- (ano_nascimento - 1) div 4 - (ano_nascimento - 1) div 100 + (ano_nascimento - 1) div 400
      bissextos_periodo <- bissextos_ate_2025 - bissextos_antes_nasc
      idade_dias <- idade_anos * 365 + bissextos_periodo
      escreval("Nome do aluno: ", nome_aluno)
      escreval("Idade em dias (na data do aniversário): ", idade_dias)
   fimse
fimalgoritmo