#include <stdio.h>

int main(void){

    int n1, n2, i, inc, limi, lims, qtdimpar35=0, somaimpar35= 0;
    float media;

    printf(" Insira um limite do intervalor: ");
    scanf("%d", &n1);
    printf(" Insira outro limite do intervalor: ");
    scanf("%d", &n2);
    printf(" Insira o valor do incremento do intervalor: ");
    scanf("%d", &inc);

    if(n1< n2){

        limi = n1;
        lims = n2;
    }
    else if(n1> n2){

        limi = n2;
        lims = n1;
    }

    for(i = limi; i <=lims; i+=inc){
            printf("%d\n", i);
            if(i != 0){
                if(i % 35== 0){
                        printf(" Divisivel por 35.\n");
                        somaimpar35 += i;
                        qtdimpar35++;


                }
            }


    }
    media = (float)somaimpar35 / qtdimpar35;
    printf("\n Media dos numeros impares divisiveis por 35: %.2f", media);




}
