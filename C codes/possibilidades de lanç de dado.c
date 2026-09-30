#include <stdio.h>

int main(void){

    int n, i,j;
    char rpt;
    do{
            int pssbl=0;
    do{
        printf(" Insira um valor de 2 a 12: ");
        scanf("%d", &n);



        if(n<2 || n>12){
                printf(" VALOR INVALIDO. DIGITE NOVAMENTE. \n");

        }

        }while(n<2 || n>12);

        for(i=1;i<=6;i++){

            for(j=1;j<=6;j++){
                if(i+j==n){
                    printf("%d + %d = %d\n",i, j, n);
                                pssbl++;

                }

            }
        }

        printf(" Num de possibilidades: %d\n", pssbl);

    printf(" Digite 'S/s' para repetir a operação. ");
    scanf(" %c", &rpt);

        }while(rpt == 'S' || rpt =='s');
    return 0;
}
