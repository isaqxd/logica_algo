#include <stdio.h>

int b = 0;
int a = 12;

main(){

while (b <= 10)
{
    a = a - 1;
    printf("%d\n", a);
    b++;
}
printf("Lancamento!\n");
return 0;
}