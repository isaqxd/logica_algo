#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int val1=0; 
int val2=0;

srand(time(NULL));

val1=rand() % 10;

for(;;){
printf("digite um numero: \n");
scanf("%d", &val2);

if (val2==val1){
    printf("acertow");
    break;
}
else{
    printf("errow");
}
}

return 0;
}