#include <stdio.h>

int main(void){

    int num,i, j;
    char qst;

    do{
    printf(" Insira um numero: ");
    scanf(" %d", &num);

    for(i = 1; i<=num; i++){

        for(j = num; j>=1; j--){
        printf(" %d ", j);
        }
        printf(" \n");
    }
    printf(" Gostaria de repetir a operaçao? (S) SIM/(N) NAO ");
    setbuf(stdin, NULL);
    scanf("%c", &qst);
    }while(qst== 's' || qst== 'S');

    return 0;
}
