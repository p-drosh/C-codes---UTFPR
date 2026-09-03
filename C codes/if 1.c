#include <stdio.h>

int main(void){

    float n1, n2, media, mf, rec;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;


    printf("Media: %.1f\n", media);

    if(media >=6 && media <= 10){

        printf("\nAprovado");
    }
    else if(media>=4 && media <6){

        printf("Em exame.");
        printf(" \nInsira a nota do exame:");
        scanf("%f", &rec);

        mf = (media+rec)/2;

        if(mf>= 6 && mf <=10){

            printf("Aprovado após exame.");
        }

        else{

            printf("Reprovado mesmo após exame");
        }
    }
    else if(media >=0 && media<4){

            printf("Reprovado.");

    }
    else{

        printf("Média inválida.");
    }
    return 0;

}
