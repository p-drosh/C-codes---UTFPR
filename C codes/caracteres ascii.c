#include <stdio.h>

int main(void){

    char ch ='1';
    int par, impar;

    while(ch != '0'){

        printf(" Infome um caractere: ");
        setbuf(stdin, NULL);
        scanf("%c", &ch);



        if(ch !='0'){

            printf("Caractere: \'%c\' | ASCII: %d -> ", ch, ch);
            if(ch%2==0){
                printf("Par\n");
               par++;

        }
        else{
            printf("Impar\n");
            impar++;
        }
        }
    }
    printf("\nQuantidades de pares: %d", par);
    printf("\nQuantidades de impares: %d\n", impar);


    return 0;

}
