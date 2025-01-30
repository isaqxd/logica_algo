#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int resultado = 0;
    int numero;
    char letra;

    srand(time(NULL));

    while (1)
    {
        printf("aperta qualquer tecla para comecar, para sair precione [P] e tecle enter\n");
        scanf(" %c", &letra);

        /* if (letra == 'p' || letra == 'P')
         {
             break;
         } */

        numero = (rand() % 21) + (-10);
        printf("\nO seu numero e [%d]: ", numero);

        if (numero == 0)
        {
            resultado = resultado + 1000;
            printf("Voce ganhou 1000 pontos.:\n");
        }
        else if (numero >= -5 && numero <= 5)
        {
            resultado = resultado + 10;
            printf("Voce ganhou 10 pontos.:\n");
        }
        else
        {
            resultado = resultado - 1;
            printf("Voce perdeu 1 ponto.\n");
        }
    }

    printf("\nA sua pontuacao e %d\n", resultado);
    return 0;
}
