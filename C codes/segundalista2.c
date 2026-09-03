#include <stdio.h>

int main(void){

    int prest, paidprest, valfix;
    float valpaid, ownval;

    printf("Insira a quantidade de prstações: ");
    scanf("%d", &prest);
    printf("Insira a quantidade de prstações pagas: ");
    scanf("%d", &paidprest);
    printf("Insira o valor das prstações: ");
    scanf("%d", &valfix);

    valpaid = (float)paidprest * (float)valfix;
    ownval = ((float)prest * (float)valfix) - valpaid;

    printf("Valor pago: %f\n", valpaid);
    printf("Valor devedor: %f", ownval);



    return 0;
}
