#include <stdio.h>

int main(void){

    char opcao;
    int n1, n2;

    printf( "Escolha uma opção: \n");
    printf(" Somar (a)\n");
    printf(" Diminuir (b)\n");
    printf(" Multiplicar (c)\n");
    printf(" DIvidir (d)\n");
    printf("Escolha: ");
    scanf("%c", &opcao);

    if(opcao == 'a' || opcao == 'b' || opcao == 'c' || opcao == 'd' || opcao == 'A' || opcao == 'B' || opcao == 'C' || opcao == 'D'){
        printf("Informe o primeiro número: ");
        scanf("%d", &n1);
        printf("\nInforme o segundo número: ");
        scanf("%d", &n2);
    }

    switch(opcao){
        case 'a':
        case 'A':
            printf("%d + %d = %d\n", n1, n2, n1+n2);
            break;
        case 'B':
        case 'b':
            printf("%d - %d = %d\n", n1, n2, n1-n2);
            break;
        case 'C':
        case 'c':
            printf("%d x %d = %d\n", n1, n2, n1*n2);
            break;
        case 'D':
        case 'd':
            if(n2 != 0){
            printf("%d / %d = %.1f\n", n1, n2, (float)n1/n2);

    }
            else{

                printf("\nNão é possível divisão com o nº 0.");
            }
            break;
        default:
            printf("\nOpção invalida.\n");

    }

    return 0;
}
