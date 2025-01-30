#include <stdio.h>
main(){
    int val1 = 100;
    int val2 = 200;
    int chute;

    for (;;){
    printf("chute um numero:");  
    scanf("%i", &chute);
    if((chute >= val1) && (chute <= val2)){
        printf("\n voce acertou!");
        break;
    }
    else{
        printf("\n voce errou!\n");
    }
    }   
    return 0;
}