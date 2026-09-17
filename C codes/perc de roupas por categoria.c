#include <stdio.h>

int main(void){

    int qnt, m= 0, f= 0, i= 0, qntt = 0;
    char cat;
    float percm, perci, percf;

    do{
        printf(" Quantas peças de roupas? ");
        scanf("%d", &qnt);

        if(qnt > 0){
            printf(" QUAL A CATEGORIA?");
            printf("\n (M) MASCULINO\n (F) FEMININO\n (I) INFANTIL\n COMANDO: ");
            scanf(" %c", &cat);

            switch(cat){

            case 'm':
            case 'M':

                m += qnt;

                printf(" %d Roupas Masculinas\n", m);
                break;

            case 'f':
            case 'F':

                f += qnt;

                printf(" %d Roupas Femininas\n", f);
                break;

            case 'i':
            case 'I':

                i += qnt;

                printf(" %d Roupas Infantis\n", i);
                break;

            default:
                    printf(" Categoria Invalida!\n");
                    break;

            }


        }
        else{

            printf("\n ENCERRANDO CONTAGEM...");
                    }
    }while(qnt >0);

        qntt= m+i+f;

    if(qntt>0){
    perci = ((float)i/qntt) * 100;
    percm = ((float)m/qntt) * 100;
    percf = ((float)f/qntt) * 100;

    printf("\n Porcentagem De Peças Infantis: %.2f%%", perci);
    printf("\n Porcentagem De Peças Femininas: %.2f%%", percf);
    printf("\n Porcentagem De Peças Masculinas: %.2f%%", percm);

    printf("\n No total: \n Peças Masculinas: %d\n Peças Femininas: %d\n Peças Infantis: %d\n", m, f, i);

    }


}
