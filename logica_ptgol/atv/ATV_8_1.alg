algoritmo "notas"
// Função : calculo de media usando função
var
n1, n2, media:real
inicio
escreva("Nota da N1: ")
leia(n1)
escreva("Nota da N2: ")
leia(n2)

media <- (n1 + n2)/2

Se media = 0 entao
   escreva ("A sua media foi: ", media:4:2, " [F]")
SeNao
   Se media <= 2 entao
      escreva ("A sua media foi: ", media:4:2, " [E]")
   SeNao
      Se media <= 4 entao
         escreva ("A sua media foi: ", media:4:2, " [D]")
      SeNao
         Se media <= 6 entao
            escreva ("A sua media foi: ", media:4:2, " [C]")
         SeNao
            Se media <= 8 entao
               escreva ("A sua media foi: ", media:4:2, " [B]")
            SeNao
               Se media < 10 entao
                  escreva ("A sua media foi: ", media:4:2, " [A]")
               SeNao
                  media <- 10
                  escreva ("A sua media foi: ", media:4:2, " [A]")
               FimSe
            FimSe
         FimSe
      FimSe
   FimSe
FimSe
fimalgoritmo
