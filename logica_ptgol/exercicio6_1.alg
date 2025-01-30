algoritmo "semnome"
// Função :
// Autor :
// Data : 28/01/25
// Seção de Declarações 
var
      ano, nasc, idade : real
inicio
      Escreva("Em que anos estamos? ")
      Leia(ano)
      Escreva("Qual é o ano do seu nascimento? ")
      Leia(nasc)
      idade <- (ano - nasc)
      Escreval("Em ", ano, " voce terá ", idade, " anos.")
      
      Se (idade > 18) entao
         EscrevaL("Você já terá atingindo a maioridade.")
      FimSe
      
fimalgoritmo
