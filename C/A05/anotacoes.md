Operadores de comparação

a == b  (IGUAL);
a != b  (DIFERENTE);
a > b   (MAIOR QUE);
a < b   (MENOR QUE);
a >= b  (MAIOR OU IGUAL);
a < = b (MENOR OU IGUAL);

Operadores lógicos relacionais

a && b      (o resultado é verdadeiro se ambas as condições forem verdadeiras.);
a || b      (o resultado é verdade se alguma condição for verdadeira.);
!a          (o resultado é verdade se a condição for falsa, e vice versa.);

variavel (!Não(O over vai narrar para o G2)) == 


int main(){
    int i = 0;
    char palavra[64];

    printf("insira uma palavra: ");
    scanf("%s", palavra);
    
    for (i = 0; palavra[i] != '\0' ; i++) {
        printf("\n a letra %d: %c", i , palavra[i]);
    }

    printf("\n fim \n");

    return 0;
}+