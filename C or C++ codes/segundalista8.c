#include <stdio.h>

int main(void){

    int num, dezmil, mil, cent, dez, uni, soma;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);


    dezmil = num / 10000;
    mil = num % 10000 / 1000;
    cent = num % 1000 / 100;
    dez = num % 100 / 10;
    uni = num % 10;

    soma = cent + dez + uni + mil + dezmil;

    printf("%d + %d + %d + %d + %d = %d ", dezmil, mil, cent, dez, uni, soma);



    return 0;
}

