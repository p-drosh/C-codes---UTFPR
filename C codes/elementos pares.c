#include <stdio.h>

int main(void){

        int num, i, contPar;

        do{

          printf(" Insira um numero positivo: ");
          scanf(" %d", &num);

          if(num<0){

            printf(" VAlor Invalido.");
          }

        }while(num <0);

        do{

            printf("%d\t", i);
            contPar++;

            if(contPar%5==0){
                printf("\n");
            }
            i=i+2;
        }while(contPar<num);


    return 0;
}
