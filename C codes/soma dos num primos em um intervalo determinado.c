#include <stdio.h>

int main(void){
    int limi, lims, i, j, cdiv, soma, num;
    char rpt;

    do{
    do{
        printf(" Insira um limite: ");
        scanf("%d", &limi);

        if(limi<=0){
            printf(" VALOR INVALIDO.\n");
        }

        }while(limi<=0);

    do{
        printf(" Insira um limite: ");
        scanf("%d", &lims);

        if(lims<=limi){
            printf("VALOR INVALIDO.\n");
        }
        }while(lims<=limi);

        for(i=limi;i<=lims;i++){
            cdiv =0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    cdiv++;
                }

            }
            num=i;
            if(cdiv==2){
                    printf(" Primo %d -> ", i);
                    while(num!=0){
                        soma+= (num%10);
                        num/=10;
                    }
                    printf(" Soma dos Digitos = %d\n", soma);
                    soma =0;
        }

        }

        printf("\n S/s para repetir a operação: ");
        scanf(" %c", &rpt);

    }while(rpt == 'S' || rpt == 's');

        return 0;

}
