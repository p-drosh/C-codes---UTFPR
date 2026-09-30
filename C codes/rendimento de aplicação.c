#include <stdio.h>

int main(void){

    int  mes, i;
    float val, rend;
    char rpt;

    do{

    do{

        printf(" Insira o valor da aplicação: ");
        scanf("%f", &val);

        if(val<=0){
                printf(" VALOR INVALIDO.");
        }
    }while(val<=0);

    do{
        setbuf(stdin, NULL);
        printf(" Insira o percentual de rendimento mensal (0 a 1): ");
        scanf("%f", &rend);

        if(rend<0 || rend > 1){
                printf(" VALOR INVALIDO.");
        }
    }while(rend<0 || rend > 1);

    do{
        setbuf(stdin, NULL);
        printf(" Insira a quantidade de meses: ");
        scanf("%d", &mes);

        if(mes<1){
                printf(" VALOR INVALIDO.");
        }
    }while(mes<1);

    printf(" MES     VALOR     % DE RENDIMENTO\n");
    for(i=1; i<=mes;i++){
        if(i%12==0){
            rend = rend + 0.25;
        }
            val = val + (val*rend);


            printf(" %d     %.2f     %.2f\n", i, val, rend);

    }

        printf(" 'S/s' para repetir a operação.");
        scanf(" %c", &rpt);
        val = 0;
    }while(rpt == 'S' || rpt == 's');
        return 0;
}
