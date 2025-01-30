#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R (1000)

int main (){
    int vetor[R];
    int aux;

    srand(time(NULL));

    for (int i = 0; i < R; i++){
        vetor[i] = 1 + (rand()*(1100-1)+RAND_MAX/2)/RAND_MAX;;
    }

    for (int pos = 0; pos < (R-1); pos++){
        if (vetor[pos] > vetor[pos+1]){
            aux = vetor[pos];
            vetor[pos] = vetor[pos+1];
            vetor[pos+1] = aux;

            pos = -1;
        }
    }



    for (int pos = 0; pos < R; pos++){
        printf("%d ", vetor[pos]);
    }
}