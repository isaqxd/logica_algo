#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANTIDADE (4)

int main()
{
    int aleatorio[QUANTIDADE];

    srand(time(NULL));

    for (int i = 0; i < QUANTIDADE; i++)
    {
        aleatorio[i] = rand();
    }

    for (int pos = 0; pos < (QUANTIDADE - 1); pos++)
    {
        printf("\n A diff entre a posicao %d e %d e %d", pos, pos + 1,

               aleatorio[pos + 1] - aleatorio[pos]);
    }
}