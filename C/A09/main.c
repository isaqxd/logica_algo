#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int chute;
    char continuar;
    int alvoD; 
    int alvoC; 
    int alvoU; 
    int alvo; 
    int acertos = 0;

    srand(time(NULL));
    alvoC = 1 + (rand() * 9) / RAND_MAX;
    alvoD = 1 + (rand() * 9) / RAND_MAX;
    alvoU = 1 + (rand()* 9) / RAND_MAX;

    do
    {
        int pontos = 10; 

        while (pontos != 0){
        
            alvo = (alvoC * 100) + (alvoD * 10) + (alvoU);

            printf("\nEscolha um numero de 3 algarismos:");
            scanf("%i", &chute);

            int chuteC = (chute/100) % 10;
            int chuteD = (chute/10) % 10;
            int chuteU = chute % 10;
            
            if(chuteC == alvoC){
                printf("[o");
            }
            else if ((chuteC == alvoD) || (chuteC == alvoU)){
                printf("[-");
            } 
            else {
                printf("[x");
            }

            if(chuteD == alvoD){
                printf(".o.");
            }
            else if ((chuteD == alvoC) || (chuteD == alvoU)){
                printf(".-.");
            } 
            else {
                printf(".x.");
            }

            if(chuteU == alvoU){
                printf("o]");
            }
            else if ((chuteU == alvoD) || (chuteU == alvoC)){
                printf("-]");
            } 
            else {
                printf("x]");
            }

            if(chute == alvo){
                printf("\nACERTOU MIZERAVI1\n");
                pontos++;
                acertos++;
                alvoC = 1 + (rand() * 9) / RAND_MAX;
                alvoD = 1 + (rand() * 9) / RAND_MAX;
                alvoU = 1 + (rand()* 9) / RAND_MAX;
                printf("TENTE NOVAMENTE OUTROS 3 ALGARISMOS: ");
            }else {
                pontos--;
            }

            printf("\nVoce tem: %i pontos\n", pontos);
        }

        printf("Voce acertou: %i vezes\n", acertos);
        printf("Quer continuar jogando? digite (s): ");
        scanf(" %c", &continuar);

    } while ((continuar == 's') || (continuar == 'S'));

    return 0;
}