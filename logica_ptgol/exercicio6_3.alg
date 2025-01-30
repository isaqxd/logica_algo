algoritmo "semnome"
// Função :
// Autor :
// Data : 28/01/25
// Seção de Declarações
var

imc, peso, altura :real
inicio
escreva("Qual é o seu peso em KG? ")
Leia(peso)
escreva("qual é a sua altura em M? ")
Leia (altura)
imc <- peso /(altura^2)
escreval("IMC: ",imc:4:2)

Se (imc < 18.5) entao
   Escreva("CLASSIFICAÇÃO IMC: Magreza.")
SeNao
   Se (imc >= 18.5) e (imc <= 24.9) entao
      Escreva ("CLASSIFICAÇÃO IMC: Normal.")
   SeNao
      Se (imc >= 25) e (imc <= 29.9) entao
         Escreva ("CLASSIFICAÇÃO IMC: Sobrepeso.")
      SeNao
         Se (imc >= 30) e (imc <= 39.9) entao
            Escreva ("CLASSIFICAÇÃO IMC: Obesidade.")
         SeNao
            Escreva ("CLASSIFICAÇÃO IMC: Obesidade grave.")
         FimSe
      FimSe
   FimSe
FimSe

fimalgoritmo
