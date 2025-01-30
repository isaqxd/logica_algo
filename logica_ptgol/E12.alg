algoritmo "semnome"

var
D:inteiro
valor:real
inicio
escreval("---------------------------")
escreval("     CRIAN�A ESPERAN�A")
escreval("---------------------------")
escreval(" Muito obrigado por ajudar")
escreval(" [1] para doar R$ 10.00")
escreval(" [2] para doar R$ 25.00")
escreval(" [3] para doar R$ 50.00")
escreval(" [4] para doar outro valor.")
escreval(" [5] para cancelar")
escreval("---------------------------")
escreval("     ESCOLHA UMA OP��O")
Leia (D)

Escolha D
   caso 1
      valor <- 10
   caso 2
      valor <- 25
   caso 3
      valor <- 50
   caso 4
      Escreva ("Qual o valor da doa��o?? ")
      leia(valor)
   caso 5
      valor <- 0
FimEscolha

escreval("---------------------------")
escreval(" SUA DOA��O FOI DE R$ ",valor:4:2)
escreval(" MUITO OBRIGADO!!")
escreval("---------------------------")
fimalgoritmo
