/* REVISAR O RESULTADO DO SALÁRIO LÍQUIDO  */


#include <stdio.h>

int main(void){

    float sal, salaum;
    float aum, desc, percaum, percdesc, result;

    printf("Informe o valor do salário: \n");
    scanf(" %f", &sal);
    setbuf(stdin, NULL);
    printf("Informe a porcentagem de desconto: \n");
    scanf(" %f", &desc);
    printf("Informe a porcentagem de aumento: \n");
    scanf(" %f", &aum);

    percaum = aum / 100;
    percdesc = desc / 100;

    result = sal + ((sal * percaum)-(sal * percdesc));
    salaum = sal + (sal * percaum);

    printf("Salário com Aumento: %.2f\n", salaum);
    printf("Salário Líquido: %.2f\n", result);


    return 0;
}

