algoritmo "semnome"
var
   Emp, P, D :real
inicio
      escreva("Qual o valor do emprestimo? ")
      leia(Emp)
      Emp <- ((Emp*20/100)+Emp)
      escreva("Quantas parcelas voc� quer dividir? ")
      leia(D)
      P <- (Emp/D)
      escreva("O seu emprestimo ser� de: R$",Emp:5:2, " dividido em ",D ," parcelas de: R$",P:5:2)
fimalgoritmo
