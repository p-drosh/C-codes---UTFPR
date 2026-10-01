#include <stdio.h>

int main(void){

    int num, soma=0;

    do{
        printf(" Insira um número: ");
        scanf("%d", &num);


        while(num!=0){

            soma+= (num%10);
            num/=10;
        }
        printf(" Soma dos dígitos: %d\n", soma);
        soma = 0;


    }while(num>=0);
}
