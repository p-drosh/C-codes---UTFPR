#include <stdio.h>

int main(void){

    int n, i, j, contdiv, maiordivs = 0;

    do{
        printf(" Insira um num de 2 a 100: ");
        scanf("%d", &n);
        if(n<2 || n>100){

            printf(" VALOR INVALIDO.\n");
        }
    }while(n<2 || n>100);

    for(i=n; i<=n+10; i++){
        contdiv = 0;
        printf("%d ->", i);
        for(j=1; j<=i; j++){

            if(i%j==0){
            contdiv++;
             printf("%d ", j);


        }
        }
        printf("| %d divisor(es).\n", contdiv);
        if(contdiv>maiordivs){
            maiordivs = contdiv;
        }

    }

    printf(" Maior numero de divisores= %d", maiordivs);

return 0;
}
