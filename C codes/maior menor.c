#include <stdio.h>

int main(void){

    int num, maior = 0, menor= 9999999;

    do{
        printf(" Digite um numero(0 para cancelar a operaçao): ");
        scanf(" %d", &num);
        if(maior<num){

            maior = num;
        }
        if(menor> num && num !=0){

            menor = num;
        }


    }while(num !=0);

    printf(" Menor: %-14d Maior %d", menor, maior);


    }
