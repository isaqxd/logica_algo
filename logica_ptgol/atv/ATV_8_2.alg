algoritmo "caseif"
// Função :
// Autor :
// Data : 30/01/25
// Seção de Declarações
var
casa, visi, dif:inteiro
v:caractere
inicio
escreval("-------------------------------")
escreval("     FLA [",casa," ] - [",visi," ] VAS")
escreval("-------------------------------")

escreva("Gols do FLA: ")
leia(casa)
escreva ("Gols do VAS: ")
Leia(visi)

dif <- abs(casa-visi)

Escolha dif
caso 0
   escreval("-------------------------------")
   escreval("     FLA [",casa," ] - [",visi," ] VAS")
   escreval("-------------------------------")
   escreval("PARTIDA TERMINOU EM EMPATE")
caso 1, 2
   escreval("-------------------------------")
   escreval("     FLA [",casa," ] - [",visi," ] VAS")
   escreval("-------------------------------")
   Se casa > visi entao
      v <- "FLA"
      escreval("PARTIDA NORMAL COM VITORIA DO: ",v)
   SeNao
      v <- "VAS"
      escreval("Partida normal com vitoria do: ",v)
   FimSe
outroCaso
   escreval("-------------------------------")
   escreval("     FLA [",casa," ] - [",visi," ] VAS")
   escreval("-------------------------------")
   Se casa > visi entao
      v <- "FLA"
      escreval("FOI UMA GOLEADO COM VITORIA DO: ",v)
   SeNao
      v <- "VAS"
      escreval("FOI UMA GOLEADO COM VITORIA DO: ",v)
   FimSe
FimEscolha
fimalgoritmo
