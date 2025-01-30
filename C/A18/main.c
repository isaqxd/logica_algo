#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int num = 10;
    char letra[num];

    srand(time(NULL));

    for (int i = 0; i < num; i++) {
        letra[i] = rand()%('z' - 'A' + 1) + 'A';

        if (letra[i] >= '[' && letra[i] <= '`')
        {
            i--;
        }
        
    }

    printf("A SUA SENHA DE LETRA E: "); 
    for (int i = 0; i < num; i++){
        printf("%c", letra[i]);
    }
    printf("\n");
    
}