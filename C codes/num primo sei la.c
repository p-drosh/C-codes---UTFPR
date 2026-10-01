#include <stdio.h>

int main(void){

    int n, i, j, cdiv, k, cpri;


    do{
        printf(" Informe um num positivo: ");
        scanf("%d", &n);



        if(n<=0){
            printf("\nVALOR INVALIDO.");
        }

        }while(n<=0);

        for(i=1; i<=11; i++){

            printf("%d ==> ", n);

            for(j=1; j<=n;j++){
                cdiv=0;
                for(k=1; k<=j;k++){
                if(j%k==0){
                    cdiv++;
                }
                            }

            if(cdiv==2){
                printf("%d ", j);
                cpri++;
            }
            }
            printf("| %d primos", cpri);
            printf("\n");
                        n++;
                        cpri=0;

}
    return 0;

}
