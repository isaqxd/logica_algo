algoritmo "semnome"

var
nome:caractere
sal, nsal:real
dep: inteiro

inicio
Escreva("Qual o nome do funcionario? ")
leia(nome)
Escreva("Qual � a base salarial do funcionario? R$")
leia(sal)
Escreva ("Quantos dependentes o funcionario tem? ")
leia(dep)

escolha dep

caso 0
   nsal <- sal + (sal * 05/100)
caso 1, 2, 3
   nsal <- sal + (sal * 10/100)
caso 4, 5, 6
   nsal <- sal + (sal * 15/100)
outroCaso
   nsal <- sal + (sal * 18/100)
fimescolha

escreva("O funcionario ", nome, " obeteve um reajuste de: R$",sal, " para R$", nsal)

fimalgoritmo

