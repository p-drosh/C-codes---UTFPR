#include <stdio.h>

int main(void){

    int num;

    printf("Informe um n´umero: ");
    scanf("%d", &num);

    num >0 ? printf("Positivo\n") : printf("Negativo\n");

    num % 2 == 0 ? printf("Par") : printf("Impar");



    return 0;
}
