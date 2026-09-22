#include <stdio.h>
#include <math.h>

int main(void){

    int div3, sqrddiv3, div5or7, raizdiv5or7, i;

    printf(" ===== DIVISIVEIS POR 3 ===== \n");
    for(i = 1; i<=100; i++ ){
            if(i % 3 == 0){

                printf("|%d| \t", i);
            }

    }

    printf("\n ===== QUADRADO DOS DIVISIVEIS POR 3 ===== \n");
    for(i = 1; i<=100; i++ ){
            if(i % 3 == 0){

                printf("|%d| \t", i*i);
            }

    }

    printf("\n ===== DIVISIVEIS POR 5 ou 7 ===== \n");
    for(i = 1; i<=100; i++ ){
            if(i % 5 == 0 || i % 7 == 0){

                printf("|%d| \t", i);
            }

    }

    printf("\n ===== RAIZ QUADRADA DOS DIVISIVEIS POR 5 ou 7 ===== \n");
    for(i = 1; i<=100; i++ ){
            if(i % 5 == 0 || i % 7 == 0){

                printf("|%.2f| \t", sqrt((float)i));
            }

    }

}
