algoritmo "semnome"

var
media, n1, n2:real
inicio
escreval("---------------------")
escreval("Lancamento de notas")
escreval("---------------------")
escreva("Primeira nota: ")
leia (n1)
escreva("Segunda nota: ")
leia (n2)

media <- (n1 + n2) / 2

EscrevaL("A medida do aluno foi ",media:4:2)

se (media >= 7) entao
   escreva ("O aluno foi aprovado")
senao
   se (media >= 5) e (media < 7) entao
      escreva("O aluno est� em recupera��o")
   senao
      escreva("O aluno foi reprovado.")
   FimSe
FimSe

fimalgoritmo
