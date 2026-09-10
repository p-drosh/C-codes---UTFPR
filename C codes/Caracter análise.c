#include <stdio.h>

int main(void){

    char ch;

    printf("Informe um caractere: ");
    scanf("%c", ch);

    if(opcao == 'a' || opcao == 'b' || opcao == 'c' || opcao == 'd' || opcao == 'A' || opcao == 'B' || opcao == 'C' || opcao == 'D'){

            printf("Caractere: %c\n", ch);
            printf("Alfabético);

    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }

    printf("Caractere: %c\n", ch);

    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case '0':
        case 'U':
            printf("Vogal.");
            break;
        default:
            printf("Consoante");
    }
    }
    else{
        printf("Não é alfabético.");
    }



    return 0;
}
