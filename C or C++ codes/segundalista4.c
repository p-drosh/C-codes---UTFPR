#include <stdio.h>

int main(void){

    int num, cent, dez, uni, soma;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    cent = num / 100;
    dez = num % 100 / 10;
    uni = num % 10;

    soma = cent + dez + uni;

    printf("%d + %d + %d = %d ", cent, dez, uni, soma);



    return 0;
}
