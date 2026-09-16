#include <stdio.h>
int main(void){

        int i, num;

        printf("Informe um numero: ");
            scanf("%d", &num);

        for(i = 1; i<=5; i++){

        printf("%d * %d = %d\n", num, i, num*i);
        }

    return 0;
}
