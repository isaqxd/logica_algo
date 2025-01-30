#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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