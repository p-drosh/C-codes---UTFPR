#include <stdio.h>
int main(void){

    int n, linha, i, numa = 1;
    do{
    printf(" Insira um num positivo: ");
    scanf("%d", &n);
    }while(n<=0);

    for(linha=1; linha <=n; linha++){
        for(i =1; i<=linha;i++){

            printf(" %d\t", numa);
            numa++;
        }
        printf("\n");
    }





return 0;
}
