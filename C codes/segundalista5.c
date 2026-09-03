#include <stdio.h>

int main(void){

    int n1, n2, resto;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo número: ");
    scanf("%d", &n2);

    resto = n1 - (n2 * (n1 / n2));

    printf("\nResto da divisão: %d", resto);

    return 0;

}
