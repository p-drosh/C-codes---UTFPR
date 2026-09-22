#include <stdio.h>

int main(void){

    int num, i, somapar=0, somaTotal = 0, qtdtotal = 0;
    long long prodImpar9=1 ;
    float media;

    do{
                printf(" Insira um numero maior que 2: ");
    scanf("%d", &num);
            if(num > 2){


      for(i=1;i<num; i++){
            somaTotal +=i;
            qtdtotal++;
            if(i % 2 ==0){
                    somapar+=i;
                printf("|%d|\t", i);
            }
            else{
                if( i % 9 ==0){
                prodImpar9*=i;}

            }

        }

        media = (float)somaTotal / qtdtotal;


            }

            else{

                printf(" Insira um n maior que 2 por favor.\n");
                scanf("%d", &num);
            }

            printf("\n Soma dos pares: %d", somapar);
            printf("\n Produto dos impares divisiveis por 9: %lld", prodImpar9);
            printf("\n Media de todos os números %.2f", media);




    }while(num<=2);

}
