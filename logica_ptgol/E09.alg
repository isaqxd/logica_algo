algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 28/01/25
// Se��o de Declara��es 
var
      ano, nasc, idade : real
inicio
      Escreva("Em que anos estamos? ")
      Leia(ano)
      Escreva("Qual � o ano do seu nascimento? ")
      Leia(nasc)
      idade <- (ano - nasc)
      Escreval("Em ", ano, " voce ter� ", idade, " anos.")
      
      Se (idade > 18) entao
         EscrevaL("Voc� j� ter� atingindo a maioridade.")
      FimSe
      
fimalgoritmo
