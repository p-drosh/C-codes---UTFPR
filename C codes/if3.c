#include <stdio.h>
int main(void){

    int mes;

    printf("Insira o mês do ano: ");
    scanf("%d", &mes);

    if(mes <=3 && mes >= 1){

        printf("Primeiro Trimestre");
    }
    else if(mes >3 && mes <=6){

        printf("Segundo Trimestre");
    }
    else if(mes >6 && mes <=9){

        printf("Terceiro Trimestre ");
    }
    else if(mes >9 && mes <=12){

        printf("Quarto trimestre, o ultimo. ");
    }
    else{

        printf("Entrada inválida.");
    }

    return 0;
}

