#include <stdio.h>

int main(void){

    int num, cent, dez, uni, inv;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    cent = num / 100;
    dez = num % 100 / 10;
    uni = num % 10;

    inv = uni * 100 + dez * 10 + cent * 1;

    printf("\nPrimeiro dígito: %d", cent);
    printf("\nSegundo dígito: %d", dez);
    printf("\nTerceiro dígito: %d", uni);

    printf("\nInverso: %d", inv);



    return 0;
}

