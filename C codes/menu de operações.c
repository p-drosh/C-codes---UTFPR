//código incompleto

#include <stdio.h>

int main(void){

    char opt;
    int num, i, qtddiv, limi, lims;

    printf(" O que desejas? \n");
    printf(" a) Apresentar e Contar os Divisores de um Numero: \n b)Exibir os números primos em um intervalo: \n c) Verificar se um número é perfeito. \n d) Verificar se a soma dos divisores (exceto o próprio número) está entre 1 e o número informado.");
    printf("\n ESCOLHA: ");
    scanf("%c", &opt);

    switch(opt){

        case 'a':
        case 'A':

            do{
                printf(" Insira um número: ");
                scanf("%d", &num);

                if(num !=0){

                    qtddiv = 0;
                    printf("\n--DIVISORES DE %d--\n", num);

                    for(i=1; i<=num; i++){
                        if(num % i == 0){

                            qtddiv +=1;

                            printf(" |%d|\t", i);
                        }
                    }

                    printf("\n %d POSSUI %d DIVISORES.\n", num, qtddiv);

                }
                else {

                    printf("\n == NUM 0 DIGITADO. ENCERRANDO OPERACAO == \n");

                }

            }while(num !=0);

            case 'b':
            case 'B':

                printf(" Insira um limite inferior: ");
                scanf("%d", &limi);
                printf(" Insira um limite superior: ");
                scanf("%d", &lims);
                printf("Primos de %d à %d: \n", limi, lims);

                for(i = limi; i<=lims; i++){

                        if (i <= 1) {
                            i = 0;
                        }
                        else {
                        for (int j = 2; j < i; j++) {
                            if (i % j == 0) {
                                i = 0;
                                break;
                                            }
                            printf("|%d|\t", i);

                                                    }
                            }




                }
            break;

    }

}

