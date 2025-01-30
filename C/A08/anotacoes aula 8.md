#include <stdio.h>   // standard input output

// int    -100, 22001231 , 881318 , -1231321, 0, 2
// float   2.1, 2.2, -3.4, 0.000001
// double  2.1, 2.2, -3.4, 0.000001
// bool    false    true
// char    a s 1 % " '  8 a f 9


// %d ou %i - inteiro
// %f       - float
// %lf      - double
// %c       - char
// %S       - string    char string[100];

// var1 == var2
// var1 != var2
// var1 > var2
// var1 >= var2
// var1 < var2
// var1 <= var2

// (condicao1) || (condicao2)               
// (condicao1) && (condicao2)
// !(condicao2)

int main() {
    int alvo = 10;
    int palpite = 10;
    int i;
    
    i = 0;

    do {
        printf("\n Faca seu palpite");                           
        scanf("%d", &palpite);

        if (palpite == alvo) {
            printf("\n Acertou!");
            printf("\n Parabens! ");        
        } else if (palpite > alvo) {
            printf("\n Errou =/");
            printf("\n Tente um numero menor ");
        } else {
            printf("\n Errou =/");
            printf("\n Tente um numero maior ");
        }

        i++;
    } while ( (palpite != alvo) && (i < 4) );

    printf("\n Voce fez %d tentativas", i);
    printf("\n Tecle qualquer coisa para terminar.");
    scanf("%d", palpite);
}
