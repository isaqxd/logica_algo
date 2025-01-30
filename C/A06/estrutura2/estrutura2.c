#include <stdio.h>

main(){
    char nome [20]= "nenhum";
    int idade = 0;
    float altura = 0.0;
    char letra;

    printf("\n Escolha (n)ome, (i)dade, (a)ltura \n");
    scanf("%c", &letra);
    fflush(stdin);

    switch(letra){
        case'n':
            printf("\n digite seu nome:", nome);
            scanf("%s", nome);

        case'i':
            printf("\n Digite sua idade:");
            scanf("%i", &idade);

        case'a':
            printf("\n Digite sua altura:");
            scanf("%f", &altura);
        break;

        default:
            printf("\n opcao invalida");
            
        break;
    }

    printf("%s, %d anos, %.2f metros", nome, idade, altura); // %d == decimais (representa um inteiro).

    return 0;
}