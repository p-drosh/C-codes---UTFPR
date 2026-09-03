#include <stdio.h>

int main(void){

    double num, pDec;
    int pInt, pDecInt, cent, dez, uni, inv;

    printf("Escreva um número com 6 casas decimais: ");
    scanf("%lf", &num);

    pInt = (int)num;
    pDec = num - pInt;
    pDecInt = pDec * 1000;

    cent = pInt / 100;
    dez = pInt % 100 / 10;
    uni = pInt % 10;

    inv = uni * 100 + dez * 10 + cent * 1;

    printf("\n Número informado %lf\n", num);
    printf("\n Parte Inteira: %d\n", pInt);
    printf("\n Parte Decimal: %lf\n", pDec);
    printf("\n Parte Decimal convertida em Inteiro: %d\n", pDecInt);
    printf("\n QUantidade de Centenas: %d\n", cent);
    printf("\n QUantidade de Dezenas: %d\n", dez);
    printf("\n QUantidade de Unidades: %d\n", uni);
    printf("\n Inverso: %d\n", inv);

    return 0;
}
