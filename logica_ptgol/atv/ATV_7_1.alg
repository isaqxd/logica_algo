algoritmo "se"
// Funcao : introducao a if
var
idade, ano, apto:real
inicio
escreva("Em que anos estamos? ")
Leia(ano)

escreva("Qual o ano de nascimeto do cliente? ")
Leia(idade)

apto <- ano - idade

Se (apto >= 18) entao
   Escreval("A idade do cliente e: ", apto)
   escreval("Ele e apto para dirigir!")
SeNao
   Escreval("A idade do cliente e: ", apto)
   escreval("o cliente nao e apto para dirigir!")
FimSe
fimalgoritmo
