#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANTIDADE (15)

// Inicialize um vetor com números aleatórios
// Busque nesse vetor os elementos vizinhos com maior diferença absoluta.


int main() {
    int aleatorio[QUANTIDADE];
    int copia;

    srand(time(NULL));
    printf("\n");
    
    for (int pos = 0; pos < QUANTIDADE; pos++) {
        aleatorio[pos] = rand();
        printf("%d ", aleatorio[pos]);
    }

    for (int pos = 0; pos < (QUANTIDADE-1); pos++) {
        if (aleatorio[pos] > aleatorio[pos+1]) {
            copia = aleatorio[pos];
            aleatorio[pos] = aleatorio[pos+1];
            aleatorio[pos+1] = copia;

            pos = -1;
        }
    }

    printf("\n");
    for (int pos = 0; pos < QUANTIDADE; pos++) {
        printf("%d ", aleatorio[pos]);
    }
    printf("\n");


}