algoritmo "consumo_viagem"

var
   tempo_gasto: real
   velocidade_media: real
   distancia_percorrida: real
   litros_usados: real

inicio
   escreva("Informe tempo gasto na viagem em horas: ")
   leia(tempo_gasto)
   escreva("Informe velocidade média da viagem em km/h: ")
   leia(velocidade_media)
   distancia_percorrida <- tempo_gasto * velocidade_media
   litros_usados <- distancia_percorrida / 12
   escreval("Velocidade média da viagem: ", velocidade_media:1:2, " km/h")
   escreval("Tempo gasto na viagem: ", tempo_gasto:1:2, " h")
   escreval("Distância percorrida: ", distancia_percorrida:1:2, " km")
   escreval("Quantidade de combustível utilizada na viagem: ", litros_usados:1:2, " L")
fimalgoritmo
