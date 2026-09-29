#include <stdio.h>

int main(void){

    int i, j ;

    for(i=1;i<=12;i++){
        int fat =1;

        printf(" %d ! -> ", i);

        for(j=i; j >=1; j--){
            fat*=j;
            printf("%d", j);

            if(j> 1){
                printf(" * ");
            }
        }
        printf(" = %d\n", fat);
    }
return 0;
}
