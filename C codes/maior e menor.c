#include <stdio.h>

int main(void){

        int num, menor = 2147483647, maior = 0;

        do{

        printf("Insira um número (0 para cancelar a operação): ");
        scanf("%d", &num);

        if(num != 0){

                if(num > maior){

                    maior = num;
                }
                if (num < menor){

                    menor = num;
                }


        }
        }while(num !=0);

        printf("O maior numero foi %d e o menor foi %d.", maior, menor);
}
