#include <stdio.h>

main()
{
    char name[10];
    float kg;
    float height;
    int years;

    printf('insira seu nome:\n'); // envia a mensagem que está dentro do printf;
    scanf("%s", name);            // scanf é utilizado para esperar e guardar um dado que coloquei uma %s"string" e define que ela é o name;
    printf('qual é a sua idade?\n');
    scanf("%i", &years);
    printf('qual é a sua altura?\n');
    scanf("%f", &height);
    printf('qual é o seu peso?\n');
    scanf("%f", &kg);
    float imc = (kg / (height * height));

    printf(" %s voce tem %i anos e o seu imc e: %.2f", name, years, imc);
}
