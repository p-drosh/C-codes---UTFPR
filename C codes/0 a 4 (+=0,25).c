#include <stdio.h>

int main(void){

    float i;


    for(i = 0; i <= 4; i+=0.25){

        printf("%.2f\t", i);
    }

    printf("\n");

    return 0;
}
