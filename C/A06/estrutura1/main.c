#include <stdio.h>
main(){
char nome[64];
int idade, repeticoes;
float altura;


repeticoes=0;

while(repeticoes < 3){

    printf("\n digite seu nome:", nome);
    scanf("%s", nome);

    printf("\n Digite sua idade:");
    scanf("%i", &idade);

    printf("\n Digite sua altura:");
    scanf("%f", &altura);

    printf("%s, %d anos, %.2f metros", nome, idade, altura); // %d == decimais (representa um inteiro).

    repeticoes++;
}

return 0;

}