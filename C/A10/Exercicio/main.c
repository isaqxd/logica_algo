#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q (4)

int main(){
    int random [Q];

    srand(time(NULL));

    for(int i = 0; i < Q; i++){ 
        random[i] = rand();
        printf("%d\n", random[i]);}
}