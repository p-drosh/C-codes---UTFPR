#include <stdio.h>

int main(void){

    float sal;
    int reais, cent;

    printf("Informe o valor do salário: ");
    scanf(" %f", &sal);

    reais = (int)sal;
    cent = (sal - reais) * 100;

    printf("Salário Informado; %.2f", sal);
    printf("\nReais: %d", reais);
    printf("\nCentavos: %d", cent);




    return 0;
}
