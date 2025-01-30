#include <stdio.h>
int main()
{
    int numero1, numero2;
   /* float resultadoracional;*/

    printf("insira um numero:\n");
    scanf("%d", &numero1);
    printf("insira outro numero:\n");
    scanf("%d", &numero2);
    
    if ((numero2 % numero1)== 0)
    {
        printf("\n %d e %d sao multiplos \n", numero1, numero2);
    }
    else
    {
        printf("\n %d e %d nao sao multiplos\n", numero1, numero2);
    }
    printf("Fim \n");
    return 0;
}