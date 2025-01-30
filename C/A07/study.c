#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int val1, val2, contador; // VARIAVEL PARA O JOGO
    int jogarNovamente; // VARIAVEL PARA REPETICAO

    srand(time(NULL));

    do {
        contador = 0; //CONTA AS JOGADAS
        printf("**JOGO - ACERTE O NUMERO** \n");
        printf("**VOCE TEM [4] CHANCES** \n");

        val1 = 1 + (rand() * (16 - 1) + RAND_MAX / 2) / RAND_MAX; //TORNA O VALOR ALEATORIO

        do {
            printf("\nDigite um numero: \n");
            scanf("%d", &val2);

            if (val2 == val1) {
                printf("VOCE ACERTOU\n");
                break;
            } else if (val2 < val1) {
                printf("ERROU!! - O NUMERO SORTEADO E MAIOR\n");
            }  else {
                printf("ERROU!! - O NUMERO SORTEADO E MENOR\n");
            }

            printf("ESTA NA JOGADA [%d]\n", contador + 1);
            contador++;

            if (contador >= 4) {
                printf("SUAS JOGADAS ACABARAM\n");
                break;
            } 
        } while (val1 != val2 && contador < 4); // FAZ QUATRO REPETIÇÕES

        printf("\nDeseja jogar novamente? (1 para sim, 0 para nao): "); //TEXTO PARA REPETICAO
        scanf("%d", &jogarNovamente); //SCANF REPETICAO
    } while (jogarNovamente == 1); // EXECUTA A REPETICAO EM ENQUANTO FOR IGUAL A 1

    printf("Obrigado por jogar!\n");
    return 0;
}