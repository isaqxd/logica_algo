algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 28/01/25
// Se��o de Declara��es
var

imc, peso, altura :real
inicio
escreva("Qual � o seu peso em KG? ")
Leia(peso)
escreva("qual � a sua altura em M? ")
Leia (altura)
imc <- peso /(altura^2)
escreval("IMC: ",imc:4:2)

Se (imc < 18.5) entao
   Escreva("CLASSIFICA��O IMC: Magreza.")
SeNao
   Se (imc >= 18.5) e (imc <= 24.9) entao
      Escreva ("CLASSIFICA��O IMC: Normal.")
   SeNao
      Se (imc >= 25) e (imc <= 29.9) entao
         Escreva ("CLASSIFICA��O IMC: Sobrepeso.")
      SeNao
         Se (imc >= 30) e (imc <= 39.9) entao
            Escreva ("CLASSIFICA��O IMC: Obesidade.")
         SeNao
            Escreva ("CLASSIFICA��O IMC: Obesidade grave.")
         FimSe
      FimSe
   FimSe
FimSe

fimalgoritmo
