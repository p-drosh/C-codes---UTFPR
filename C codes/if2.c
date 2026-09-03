#include <stdio.h>
int main(void){

    int age;

    printf("Insira a idade do jogador: ");
    scanf("%d", &age);

    if(age <=4 && age >= 0){

        printf("Ainda é cedo para jogar futebol.");
    }
    else if(age >4 && age <=10){

        printf("Categoria de base sub-10");
    }
    else if(age >10 && age <=17){

        printf("Categoria de base sub -17 ");
    }
    else if(age >17 && age <=20){

        printf("Categoria de base sub -20 ");
    }
    else if(age >20 && age <=35){

        printf("Profissional");
    }
    else if(age >35 && age <=55){

        printf("Master");
    }
    else if(age >55 && age <= 110){

        printf("Aposenta logo");
    }
    else{

        printf("Entrada inválida.");
    }

    return 0;
}
