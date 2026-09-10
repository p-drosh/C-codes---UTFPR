#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int num;

    srand(time(NULL));

    num = rand() % 11
    ;

    printf("NUM: %d\n", num);

    return 0;
    }
