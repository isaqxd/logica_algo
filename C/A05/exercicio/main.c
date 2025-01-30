#include <stdio.h>
main(){
    float a, b, c;

    printf("insira o lado A do triangulo:\n");
    scanf("%f", &a);
    printf("insira o lado B do triangulo:\n");
    scanf("%f", &b);
    printf("insira o lado C do triangulo:\n");
    scanf("%f", &c);

    if ((a == b) && (b == c)){
        printf("esse triangulo e equilatero");

    }
    else if ((a == b) || (b == c) || (!(a == c))){
        printf("esse triangulo e isosceles");

    }
    else{
        printf("esse triango e escaleno");
    }
    return 0;
}