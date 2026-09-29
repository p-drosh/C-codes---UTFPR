#include <stdio.h>

int main(void){

    int num, i=2, j, contpri=0, contdiv;

    do{
    printf(" Informe um número: ");
    scanf("%d", &num);
    }while(num<=0);

    while(contpri<num){
        contdiv = 0;

        for(j=1; j<=i; j++){
            if(i%j==0){
                    contdiv++;

            }
        }
        if(contdiv ==2){
            printf("%d\t", i);
            contpri++;
        }
        i++;
    }
    printf("\n");
    return 0;
}
