algoritmo "conversao_moedas"

var
   opcao_moeda: inteiro
   valor_reais, valor_convertido: real
   cotacao_dolar, cotacao_euro, cotacao_iene, cotacao_peso, cotacao_rublo, cotacao_libra: real
   moeda, nome_moeda, simbolo_moeda: caractere
   moeda_valida: logico

inicio
   cotacao_dolar <- 5.00
   cotacao_euro <- 5.50
   cotacao_iene <- 0.034
   cotacao_peso <- 0.005
   cotacao_rublo <- 0.055
   cotacao_libra <- 6.40
   opcao_moeda <- 0
   moeda_valida <- verdadeiro

   escreva("Informe o valor em R$: ")
   leia(valor_reais)
   escreval("Informe o nome da moeda que quer comprar.")
   escreval("Opções: dólar, euro, iene, peso, rublo ou libra: ")
   leia(moeda)

   se (moeda = "dólar") ou (moeda = "dolar") ou (moeda = "dólares") ou (moeda = "dolares") entao
      opcao_moeda <- 1
   fimse

   se (moeda = "euro") ou (moeda = "euros") entao
      opcao_moeda <- 2
   fimse

   se (moeda = "iene") ou (moeda = "ienes") ou (moeda = "yen") ou (moeda = "iens") entao
      opcao_moeda <- 3
   fimse

   se (moeda = "peso") ou (moeda = "pesos") entao
      opcao_moeda <- 4
   fimse

   se (moeda = "rublo") ou (moeda = "rublos") entao
      opcao_moeda <- 5
   fimse

   se (moeda = "libra") ou (moeda = "libras") entao
      opcao_moeda <- 6
   fimse

   escolha opcao_moeda
   caso 1
      valor_convertido <- valor_reais / cotacao_dolar
      nome_moeda <- "dólar"
      simbolo_moeda <- "US$"
   caso 2
      valor_convertido <- valor_reais / cotacao_euro
      nome_moeda <- "euro"
      simbolo_moeda <- "€"
   caso 3
      valor_convertido <- valor_reais / cotacao_iene
      nome_moeda <- "iene"
      simbolo_moeda <- "¥"
   caso 4
      valor_convertido <- valor_reais / cotacao_peso
      nome_moeda <- "peso argentino"
      simbolo_moeda <- "AR$"
   caso 5
      valor_convertido <- valor_reais / cotacao_rublo
      nome_moeda <- "rublo"
      simbolo_moeda <- "₽"
   caso 6
      valor_convertido <- valor_reais / cotacao_libra
      nome_moeda <- "libra"
      simbolo_moeda <- "£"
   outrocaso
      moeda_valida <- falso
   fimescolha

   se moeda_valida entao
      escreval("Valor em reais: R$ ", valor_reais:1:2)
      escreval("Valor convertido em ", nome_moeda, ": ", simbolo_moeda, " ", valor_convertido:1:2)
   senao
      escreval("Moeda inválida.")
   fimse
fimalgoritmo