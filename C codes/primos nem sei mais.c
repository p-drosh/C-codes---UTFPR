#include <stdio.h>

int main(void){

    int i, j, linha, numa=0, cdiv;

    printf("Quantos num por linha? ");
    scanf("%d", &linha);

    for(i=1;i<=140;i++){
            cdiv=0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    cdiv++;
                }



            }
            if(cdiv==2){
                    printf("%d\t", i);
                                numa++;


        if(numa%linha==0){
            printf("\n");
        }
    }

    }
    return 0;
}
