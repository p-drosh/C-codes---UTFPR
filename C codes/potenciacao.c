#include <stdio.h>

int main(void){

    int num, i, exp, rlt;


    printf(" Insira um número: ");
    scanf("%d", &num);
    printf(" Insira um número para expoente: ");
    scanf("%d", &exp);
    printf(" \n ");
    for(i =exp; i>=1; i--){
        num = num*exp;
        printf("%d", num);

            if(i >1){
                printf(" * ");
            }
            else{
                printf(" = %d", rlt);
            }



    }






}
