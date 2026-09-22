#include <stdio.h>

int main(void){

    int num, i;
    long long int fat = 1;
    do{

        printf(" Insira um num para calcular o fatorial: ");
        scanf(" %d", &num);

    }while(num < 1 || num > 20);

    for(i=num; i>=1; i--){
                fat= fat*i;
                printf(" %d", i);


    if(i > 1){
        printf(" * ");

    }else{
    printf(" = ");
    }
}
    printf(" %lld", fat);



}
