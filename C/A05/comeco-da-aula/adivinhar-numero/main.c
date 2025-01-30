#include <stdio.h>
main(){

    int alvo = 1234;
    int chute;

    printf("chute um numero:\n");
    scanf("%d", &chute);

    if (chute == alvo){
        printf("\n voce acertou!");
        return 0;
    }
    else if (chute < alvo){
    printf("voce errou o numero que vc escolheu e menor!");
    }
    else{
        printf("voce errou o numero que vc escolhe e maior!");
    }
}