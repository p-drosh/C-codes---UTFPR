#include <stdio.h>

int main(void){

    double troco;
    int reais, cent;

    printf("Informe o valor do troco: ");
    scanf(" %lf", &troco);

    reais = (int)troco;
    cent = (troco - reais) * 100;

    printf("O troco será de %d reais e %d centavos. ", reais, cent);

    return 0;

}
