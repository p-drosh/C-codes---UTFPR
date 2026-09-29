#include <stdio.h>
int main(void){

    int n, l, i, j, contimp, soma;
    float media;
    char rpt;
    do{
            i=0;
            contimp =1;
            soma= 0;
    do{
    printf(" Insira um num positivo: ");
    scanf(" %d", &n);
    }while(n<=0);
    do{
    printf("\n Quantos num por linha? ");
    scanf(" %d", &l);
    }while(l<=0);

    while(contimp<=n){
        if(i%2!=0){
                                printf("%d\t",i);

        if(contimp%l==0){

            printf("\n");
        }
          contimp++;
          soma+= i;

        }

                i++;


    }
    media = (float)soma/n;

    printf(" Media dos impares: %.2f \n", media);
    printf(" Deseja repetir a operação(S/s)?");
    scanf(" %c", &rpt);

    }while(rpt =='S' || rpt =='s');
    return 0;
}
