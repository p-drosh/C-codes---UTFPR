#include <stdio.h>
int main(void){

        int num = 1;

        while(num>0){

        printf(" Informe um numero: ");
        scanf("%d", &num);

        if(num !=0 && num>0){

        if(num % 2 ==0){

            printf("PAR\n");

        }

        else{

            printf("Impar.\n");
        }
        }
        else{

                printf(" Numero Zero/Negativo digitado.\n Encerrando o loop.");

            break;
        }
}
}
