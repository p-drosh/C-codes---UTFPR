#include <stdio.h>

int main(void){

    int i, cont = 0, soma = 0;
    float med;


    for(i = 21; i < 100; i++){

        if(i % 2 == 0){

                printf("%d\n", i);

    }
        if(i % 5 ==0){

                cont+=1;
                soma= soma + i;
        }
    }
    if(cont > 0){
    med = (float)soma / cont;
    printf("\n Media de Números Pares de 20 a 100 divisiveis por 5: %.2f", med); }
    else{

    printf("\n Nenhum numero encntrado"); }


    }


