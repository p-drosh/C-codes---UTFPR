#include <stdio.h>

int main(void){

    char opt;
    int somaDiv, num, i, qtddiv, limi, lims;

    printf(" O que desejas? \n");
    printf(" a) Apresentar e Contar os Divisores de um Numero: \n");
    printf(" b) Exibir os numeros primos em um intervalo: \n");
    printf(" c) Verificar se um numero e perfeito. \n");
    printf(" d) Verificar se a soma dos divisores (exceto o proprio numero) esta entre 1 e o numero informado.\n");
    printf(" ESCOLHA: ");
    scanf(" %c", &opt);

    switch(opt){

        case 'a':
        case 'A':
            do {
                printf("\n Insira um numero (ou 0 para sair): ");
                scanf("%d", &num);

                if(num != 0){
                    qtddiv = 0;
                    printf("\n--DIVISORES DE %d--\n", num);

                    for(i = 1; i <= num; i++){
                        if(num % i == 0){
                            qtddiv += 1;
                            printf(" |%d|\t", i);
                        }
                    }

                    printf("\n %d POSSUI %d DIVISORES.\n", num, qtddiv);
                }
                else {
                    printf("\n == NUM 0 DIGITADO. ENCERRANDO OPERACAO == \n");
                }

            } while(num != 0);

            break; // Adicionado para impedir a execução do 'case b'

        case 'b':
        case 'B':
            printf("\n Insira um limite inferior: ");
            scanf("%d", &limi);
            printf(" Insira um limite superior: ");
            scanf("%d", &lims);

            printf("\nPrimos de %d a %d: \n", limi, lims);

            for(i = limi; i <= lims; i++){
                if (i <= 1) {
                    continue; // Pula 0, 1 e números negativos
                }

                int ehPrimo = 1;

                // O teste j * j <= i é equivalente a j <= sqrt(i) (mais eficiente)
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        ehPrimo = 0;
                        break;
                    }
                }

                if (ehPrimo) {
                    printf("|%d|\t", i);
                }
            }
            printf("\n");
            break;

        default:
            printf("\nOpcao invalida ou ainda nao implementada.\n");
            break;

        case 'c':
        case 'C':
            printf(" Insira um Numero: ");
            scanf("%d", &num);

            somaDiv = 0;

            for(i=0;i<=(num/2); i++);{
                if(i % num ==0){

                    somaDiv+=1;

                }

                if(somaDiv == num){

                    printf(" O numero %d e perfeito.", num);
                }
                else{

                    printf(" O numero %d nao e perfeito.", num);
                }

            }
        break;

        case 'd':
        case 'D':
            printf("\n Insira um limite inferior: ");
            scanf("%d", &limi);
            printf(" Insira um limite superior: ");
            scanf("%d", &lims);

            somaDiv = 0;

            for(i=0; i <=(num/2); i++){
                if(i % num == 0){

                    printf("%d\t", i);
                     somaDiv+=i;

                }
            }


    }


    return 0;
}
