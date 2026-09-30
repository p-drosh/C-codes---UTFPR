#include <stdio.h>

int main(void){

    char rpt;

    do{
        int i, n, t1 = 1, t2 =1, t;

        printf(" Quantos num na sequencia de fibonacci: ");
        scanf("%d", &n);

        for(i=1;i<=n; i++){
            printf("%d\t", t1);
        t = t1+t2;
        t1=t2;
        t2=t;
    }
        printf("\nS/s para repetir a operação: ");
        scanf(" %c", &rpt);
    }while(rpt =='S' || rpt =='s');



    return 0;

}
